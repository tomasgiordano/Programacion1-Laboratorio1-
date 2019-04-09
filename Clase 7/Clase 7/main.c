#include <stdio.h>
#include <stdlib.h>
#define T 1
void pedirCadena(char[],char[],int);

int main()
{
    int legajos[T];
    float sueldos[T];
    char sexos[T];
    float sueldoNeto[T];
    char nombres[T][20];
    char auxChar;
    float auxFloat;
    int auxInt;
    char auxCadena[T];

    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajos[i]);

        printf("Ingrese sueldo bruto: ");
        scanf("%f",&sueldos[i]);

        fflush(stdin);
        printf("Ingrese sexo (m o f) ");
        scanf("%c",&sexos[i]);

        pedirCadena("nombre: ",nombres[i],20);

        sueldoNeto[i]=sueldos[i]*0.85;
    }

    for(i=0;i=T;i++)
    {
        for(j=i+1;j++)
        {
            if(legajos[i]>legajos[j])
            {
                auxEnteros = legajos[i];
                legajos[i]= legajos[j];
                legajos[j]=legajos[i];

                //seguir burbujeando con todos los datos
            }
        }
    }

    for(i=0;i<T;i++)
    {
        printf("%d-%s-%.2f-%c",legajos[i],nombres[i],sueldoNeto[i],sexos[i]);
    }

    return 0;
}

void pedirCadena(char mensaje[],char cadena[],int tam)
{
    int i=0;

    char ingrese[50]="Ingrese ";
    strcat(ingrese,mensaje);
    printf(ingrese);

    fflush(stdin);

    scanf("%[^\n]",cadena);
    //validar
}
