
#include <stdlib.h>
#include "Empleado.h"

#define T 10
#define S 4

int menuDeOpciones(char[]);

/*
Informes:

1- EL/LOS Empleados con mayor sueldo.
2- Cantidad de empleados que se llamen carlos y ganen mas de 20000
*/

int main()
{
    //int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);

    eSector sectores[S] = {{1,"Contabilidad",100},{2,"Sistemas",200},{3, "RRHH", 150},{4, "Limpieza", 50}};

    hardcodearDatosEmpleados(lista,6);

    do
    {
        opcion = menuDeOpciones("1.Crear un empleado.\n2.Dar de baja por legajo.\n3.Modificar por legajo.\n4.Mostrar empleados.\n5.Informar |1|\n10.Salir.\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,T,sectores,S);
            break;
            case 2:
                borrarEmpleado(lista, T, S);
                break;
            case 3:
                modificar(lista, T, S);
            break;
            case 4:
                mostrarListaEmpleados(lista, T, sectores, S);
                break;
            case 5:
                printf("El");
                mostrarEmpleadosSueldoMaximo(lista,T,sectores,S);
                printf("La cantidad de carlos que ganan mas de $20.000 es: %d\n", contarCarlos(lista,T));
                system("pause");
            break;
            default:
                printf("ERROR. Ingrese una opcion valida!");
            break;
        }
        system("cls");
    }while(opcion!=10);

    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
