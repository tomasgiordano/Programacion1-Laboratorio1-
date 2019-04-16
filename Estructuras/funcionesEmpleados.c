#include "funcionesEmpleados.h"
#include <stdio.h>
#include <stdlib.h>
#define T 1

void crearEmpleado(eEmpleado empleado[], int tam)
{
    int i;
    int posicionLibre;

    posicionLibre=buscarLibre(empleado,tam);

    if(posicionLibre!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&empleado[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(empleado[i].nombre);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&empleado[i].sexo);

        printf("Ingrese sueldo bruto: ");
        scanf("%f",&empleado[i].sueldoBruto);
        empleado[i].sueldoNeto=empleado[i].sueldoBruto*0.85;

        printf("Empleado creado exitosamente!");
    }
    else
    {
        printf("Espacio ocupado, lista de empleados completa.");
    }
    system("pause");
}

void mostrarEmpleado(eEmpleado empleado[],int posicion)
{
    printf("%d-%s-%c-%.2f\n",empleado[posicion].legajo,empleado[posicion].nombre,empleado[posicion].sexo,empleado[posicion].sueldoNeto);
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
        if(empleado.estado==0)
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

void mostrarMenu()
{
    int opcion;
    char seguir='s';
    eEmpleado empleado[T];

    do
    {
        printf("1. Crear un Empleado.\n");
        printf("2. Mostrar Empleados.\n");
        printf("3. Buscar un empleado.\n");
        printf("4. Dar de baja.\n");
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
