#include <stdio.h>
#include <stdlib.h>
#define T 1
void pedirCadena(char[],char[],int);

int main()
{
    int legajos[T];
    float sueldos[T];
    char sexos[T];
    char nombres[T][20];
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajos[i]);

        printf("Ingrese sueldos: ");
        scanf("%f",&sueldos[i]);

        fflush(stdin);
        printf("Ingrese sexo (m o f) ");
        scanf("%c",&sexos[i]);

        pedirCadena("nombre: ",nombres[i],20);
    }

    for(i=0;i<T;i++)
    {
        printf("%d-%s-%f-%c",legajos[i],nombres[i],sueldos[i],sexos[i]);
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
