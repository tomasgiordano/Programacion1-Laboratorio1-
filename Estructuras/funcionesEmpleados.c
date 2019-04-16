#include "funcionesEmpleados.h"
#include <stdio.h>
#include <stdlib.h>
#define T 1
#define LIBRE 0
#define OCUPADO 1

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
    for(i=0;i<posicion;i++)
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

void inicializarEmpleados(eEmpleado empleado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        empleado[i].estado=LIBRE;
    }
}

void darBaja(eEmpleado empleado[], int tam)
{
    int legajoBaja;
    int busqueda;

    printf("Ingrese el legajo del empleado que quiere dar de baja: ");
    scanf("%d",&legajoBaja);

    busqueda=buscarLegajo(empleado,T,legajoBaja);

    if(busqueda==0)
    {
        printf("No se ha encontrado ningun empleado con ese legajo.\n");
    }
    else
    {
        printf("Empleado encontrado y dado de baja con exito!\n");
        empleado[legajoBaja].estado=LIBRE;
    }
}

int buscarLegajo(eEmpleado empleado[],int tam, int legajo)
{
    int i;
    int busqueda=0;

    for(i=0;i<tam;i++)
    {
        if(empleado[i].legajo==legajo)
        {
            busqueda=1;
            break;
        }
    }
    return busqueda;
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
                system("pause");
            break;
            case 3:

            break;
            case 4:
                darBaja(empleado,T);
                system("pause");
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
