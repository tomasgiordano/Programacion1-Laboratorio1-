#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int opcion;
    int numero;
    int i;
    int datos[TAM];
    int *pDatos;
    pDatos=datos;

    for(i=0;i<TAM;i++)
    {
        datos[i]=0;
    }

    do
    {
        printf("---ABM NUMEROS---\n\n");
        printf("1)Alta\n2)Baja\n3)Modificaciones\n4)Informar\n5)Salir\nIngrese una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\n\n--MENU ALTAS--\n");
                printf("Ingrese un numero: ");
                scanf("%d",numero);
                for(i=0;i<TAM;i++)
                {
                    if((pDatos+i)==0)
                    {
                        (pDatos+i)=numero;
                        break;
                    }
                    else
                    {
                        printf("\n\nTodos los espacios ocupados!\n");
                    }
                }
                system("pause");
            break;
            case 2:
                printf("\n\n--MENU BAJAS--\n");
                system("pause");
            break;
            case 3:
                printf("\n\n--MENU MODIFICAR--\n");
                system("pause");
            break;
            case 4:
                printf("\n\n--MENU INFORMAR--\n");
                system("pause");
            break;
            case 5:
                printf("\n\nHasta luego!\n");
                system("pause");
            break;
            default:
                printf("\n\nERROR. Opcion incorrecta.\n");
                system("pause");
            break;
        }
    system("cls");
    }while(opcion!=5);

    return 0;
}
