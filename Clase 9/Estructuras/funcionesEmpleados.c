#include "funcionesEmpleados.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 6
#define LIBRE 0
#define OCUPADO 1

void inicializarEmpleados(eEmpleado empleado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        empleado[i].estado=LIBRE;
    }

}

void hardcodearDatosEmpleados(eEmpleado empleado[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        empleado[i].legajo = legajos[i];
        strcpy(empleado[i].nombre, nombres[i]);
        empleado[i].sexo = sexo[i];
        empleado[i].sueldoBruto = sueldosBruto[i];
        empleado[i].sueldoNeto = sueldosBruto[i] * 0.85;
        empleado[i].estado = OCUPADO;

    }
}

void crearEmpleado(eEmpleado empleado[], int tam)
{
    int posicionLibre;

    posicionLibre=buscarLibre(empleado,tam);

    if(posicionLibre!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&empleado[posicionLibre].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(empleado[posicionLibre].nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&empleado[posicionLibre].sexo);

        printf("Ingrese sueldo bruto: ");
        scanf("%f",&empleado[posicionLibre].sueldoBruto);
        empleado[posicionLibre].sueldoNeto=empleado[posicionLibre].sueldoBruto*0.85;

        empleado[posicionLibre].estado=OCUPADO;

        printf("Empleado creado exitosamente!\n");
    }
    else
    {
        printf("Espacio ocupado, lista de empleados completa.\n");
    }
    system("pause");
}

void mostrarEmpleado(eEmpleado empleado[],int posicion)
{
    int i;
    for(i=0;i<T;i++)
    {
        if(empleado[i].estado!=LIBRE)
        {
            printf("%d-%s-%c-%.2f\n",empleado[posicion].legajo,empleado[posicion].nombre,empleado[posicion].sexo,empleado[posicion].sueldoNeto);
        }
    }
}

void mostrarTodos(eEmpleado empleado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarEmpleado(empleado,i);
    }
    system("pause");
}

int buscarLibre(eEmpleado empleado[],int tam)
{
    int i;
    int posicion;

    for(i=0;i<tam;i++)
    {
        if(empleado[i].estado==0)
        {
            posicion=i;
            break;
        }
        else
        {
            posicion=-1;
        }
    }

    return posicion;
}


int buscarLegajo(eEmpleado empleado[],int tam, int legajo)
{
    int i;
    int busquedaLegajo=-1;

    for(i=0;i<tam;i++)
    {
        if(empleado[i].legajo==legajo)
        {
            busquedaLegajo=i;
            break;
        }
    }
    return busquedaLegajo;
}

void darBaja(eEmpleado empleado[], int tam)
{
    int legajoBaja;
    int posicionLegajo;
    char pregunta;

    printf("Ingrese el legajo del empleado que quiere dar de baja: ");
    fflush(stdin);
    scanf("%d",&legajoBaja);


    posicionLegajo=buscarLegajo(empleado,T,legajoBaja);

    if(posicionLegajo!=-1)
    {
        printf("Esta seguro que quiere dar de baja al empleado | %s | con legajo | %d | ?\n\tSi(s) o No(n):\t",empleado[posicionLegajo].nombre,empleado[posicionLegajo].legajo);
        scanf("%s",&pregunta);
        fflush(stdin);

        if(pregunta=='s')
        {
            printf("Empleado | %s | encontrado y dado de baja con exito!\n",empleado[posicionLegajo].nombre);
            empleado[posicionLegajo].estado=LIBRE;
        }

    }
    else
    {
        printf("No se ha encontrado ningun empleado con ese legajo.\n");
    }
    system("pause");
}

void modificarSueldo(eEmpleado empleado[],int tam)
{
    int legajo;
    int busqueda;

    printf("Ingrese el legajo del empleado cuyo sueldo quiere modificar: ");
    scanf("%d",&legajo);

    busqueda=buscarLegajo(empleado,tam,legajo);


    if(busqueda!=-1)
    {
        printf("Ingrese el nuevo sueldo de | %s |: ",empleado[busqueda].nombre);
        scanf("%f",&empleado[busqueda].sueldoBruto);
        empleado[busqueda].sueldoNeto=empleado[busqueda].sueldoBruto*0.85;
        printf("Sueldo modificado exitosamente!\n");
    }
    else
    {
        printf("No se ha encontrado el legajo en la lista.\n");
    }
    system("pause");
}

float buscarMaximosSueldos(eEmpleado empleado[],int tam)
{
    float max=-1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(empleado[i].sueldoNeto<=max)
        {
            max=empleado[i].sueldoNeto;
        }
    }
    return max;
}

void mostrarMaximosSueldos(eEmpleado empleado[],int tam)
{
    float maxSueldoNeto;
    int i;

    maxSueldoNeto=buscarMaximosSueldos(empleado,tam);

    printf("Empleados con el mayor sueldo:\n");
    for(i=0;i<tam;i++)
    {
        if(empleado[i].sueldoNeto==maxSueldoNeto)
        {
            mostrarEmpleado(empleado,i);
        }
    }
}

int buscarCantidadCarlos(eEmpleado empleado[],int tam)
{
    int i;
    int cantidadCarlos=0;
    for(i=0;i<tam;i++)
    {
        if(stricmp(empleado[i].nombre,"carlos")==0)
        {
            cantidadCarlos++;
        }
    }
    return cantidadCarlos;
}

void imprimirCarlos(eEmpleado empleado[],int tam)
{
    int cantidadCarlos;
    cantidadCarlos=buscarCantidadCarlos(empleado,tam);
    printf("La cantidad de empleados llamados Carlos es: %d",cantidadCarlos);
}

void informar(eEmpleado empleado[],int tam)
{
    buscarMaximosSueldos(empleado,tam);
    imprimirCarlos(empleado,tam);
}

void mostrarMenu()
{
    int opcion;
    char seguir='s';
    eEmpleado empleado[T];
    inicializarEmpleados(empleado,T);
    hardcodearDatosEmpleados(empleado,T);

    do
    {
        printf("1. Crear un Empleado.\n");
        printf("2. Mostrar Empleados.\n");
        printf("3. Modificar sueldo por legajo.\n");
        printf("4. Dar de baja por legajo.\n");
        printf("5. Informar.\n");
        printf("6. Salir.\n");
        printf("Ingrese una opcion: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                crearEmpleado(empleado,T);
            break;
            case 2:
                mostrarTodos(empleado,T);
            break;
            case 3:
                modificarSueldo(empleado,T);
            break;
            case 4:
                darBaja(empleado,T);
            break;
            case 5:
                informar(empleado,T);
            break;
            case 6:
                seguir='n';
            break;
            default:
                printf("ERROR. Ingrese una opcion valida.\n");
                system("pause");
            break;
        }

        system("cls");

    }while(seguir=='s');

}
