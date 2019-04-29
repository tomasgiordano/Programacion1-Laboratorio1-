#include <string.h>
#include <stdlib.h>
#include "Empleado.h"


void cargarEmpleado(eEmpleado lista[],int tamEmpleado,eSector sectores[],int cantidadSectores)
{
    int i;
    int j;
    int sector;
    int valorHora;

    i = buscarLibre(lista, tamEmpleado);
    if(i!=-1)
    {
        printf("\n---CREACION DE EMPLEADO---\n\n");
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);

        printf("Ingrese el ID del sector: \n");
        for(j=0;j<cantidadSectores;j++)
        {
            printf("%d-%s\n",sectores[j].idSector,sectores[j].descripcion);
        }
        scanf("%d", &lista[i].idSector);
        sector=lista[i].idSector;

        printf("Ingrese cantidad de horas: ");
        scanf("%d",&lista[i].cantidadHoras);

        for(j=0;j<cantidadSectores;j++)
        {
            if(sector==sectores[j].idSector)
            {
                valorHora=sectores[j].valor;
                break;
            }
        }

        lista[i].sueldoBruto= lista[i].cantidadHoras*valorHora;
        lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;
    }
    else
    {
        printf("ERROR. No hay espacio para otro empleado en la lista.");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    printf("\n---LISTA COMPLETA DE EMPLEADOS---\n\n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], sectores, ts);
        }

    }
    system("pause");
}
void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %.2f %.2f.....................%s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,descripcionSector);

}

int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,1,2,2};

    //eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];
    }
}

void modificar(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("\n---MODIFICACION DE SUELDO DE EMPLEADO---\n\n");
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            printf("Ingrese un nuevo sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;

            loEncontro = 1;
            break;//modifcar
        }
    }

    if(loEncontro==0)
    {
        printf("ERROR. El legajo ingresado no le pertenece a ningun empleado.");
    }

}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("\n---ELIMINACION DE EMPLEADOS---\n\n");
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            lista[i].estado = LIBRE;

            loEncontro = 1;
            break;//modifcar
        }
    }

    if(loEncontro==0)
    {
        printf("ERROR. El legajo ingresado no le pertenece a ningun empleado.");
    }

}

float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(flag==0 || lista[i].sueldoBruto>maximo)
            {
                maximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }
    return maximo;
}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[],int tam, eSector sectores[],int tamSectores)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        {
            mostrarEmpleado(lista[i],sectores,tamSectores);
        }
    }
}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contadorCarlos++;
            }
        }
    }

    return contadorCarlos;
}

void mostrarSectorConMasEmpleados(eEmpleado lista[],int te,eSector sectores[],int ts)
{
    int i;
    int j;
    int max;
    int flag=0;
    eSectorEmpleado auxiliar[ts];

    //INICIALIZAR AUXILIAR//
    for(i=0;i<ts;i++)
    {
        auxiliar[i].idSector=sectores[i].idSector;
        auxiliar[i].contadorEmpleado=0;
        strcpy(auxiliar[i].descripcion,sectores[i].descripcion);

    }

    for(j=0;j<ts;j++)
    {
        printf("%s\n",auxiliar[j].descripcion);
    }

    //CUENTA CUANTOS EMPLEADOS HAY EN CADA SECTOR//
    for(i=0;i<ts;i++)
    {
        for(j=0;j<te;j++)
        {
            if(sectores[i].idSector==lista[j].idSector)
            {
                auxiliar[i].contadorEmpleado++;
            }
        }
    }

    //BUSCAR MAXIMO//
    for(i=0;i<ts;i++)
    {
        if(flag==0 || auxiliar[i].contadorEmpleado>max)
        {
            max=auxiliar[i].contadorEmpleado;
            flag=1;
        }
    }

    //ENCONTRAR Y MOSTRAR SECTOR MAXIMO//
    for(i=0;i<ts;i++)
    {
        if(max==auxiliar[i].contadorEmpleado)
        {
            printf("EL SECTOR CON MAS EMPLEADOS ES: %s con %d empleados\n",auxiliar[i].descripcion,auxiliar[i].contadorEmpleado);
        }
    }
    system("pause");
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
