#include "funcionesEmpleados.h"
#include <stdio.h>
#include <stdlib.h>
#define T 1
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

//void modificarSueldo(eEmpleado[],int)
//{

//}

void mostrarMenu()
{
    int opcion;
    char seguir='s';
    eEmpleado empleado[T];
    inicializarEmpleados(empleado,T);

    do
    {
        printf("1. Crear un Empleado.\n");
        printf("2. Mostrar Empleados.\n");
        printf("3. Modificar sueldo por legajo.\n");
        printf("4. Dar de baja por legajo.\n");
        printf("5. Salir.\n");
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

            break;
            case 4:
                darBaja(empleado,T);
            break;
            case 5:
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
