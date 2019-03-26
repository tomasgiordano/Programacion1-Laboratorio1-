#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include "Recursividad.h"

int main()
{
   /* int edad;
    int legajo;
    int peso;

    edad=pedirEntero("Ingresar edad: ");
    legajo=pedirEntero("Ingresar legajo: ");
    peso=pedirEntero("Ingresar peso: ");

    return 0;
    */

    /*
    int resultado= factorial(5);
    printf("%d",resultado);

    return 0;
    */
    int opcion;
    char seguir='s';

    do
    {
        printf("1.Alta\n2.Baja\n3.Informar\n4.Salir\nElija una opcion.");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            printf("Estoy dando de alta!\n");
        break;
        case 2:
            printf("Estoy dando de baja!\n");
        break;
        case 3:
            printf("Estoy informando!\n");
        break;
        case 4:
            printf("Cerrando el programa!\n");
            seguir='n';
        break;
        default:
            printf("Ingrese una opcion valida!");
        break;
        }
        system("pause");
        system("cls");
    }while(seguir=='s');
    return 0;
}
