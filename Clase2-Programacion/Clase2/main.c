#include <stdio.h>
#include <stdlib.h>

/*
    //EJEMPLO CLASE 1
    int numero1;
    int numero2;
    int resultado;
    float promedio;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);

    printf("Ingrese otro numero: ");
    scanf("%d", &numero2);

    resultado=numero1+numero2;
    promedio=(float)resultado/2;

    printf("El resultado de la suma es: %d\nEl promedio es: %.2f",resultado,promedio);

    */


    /*
    //CADENAS DE CARACTERES
    char character;
    char palabra[16];

    printf("Ingrese un caracter: ");
    scanf("%c",&character);

    printf("Usted ingreso: %c",character);

    printf("\nIngrese una palabra: ");
    scanf("%s",&palabra);

    printf("Usted ingreso: %s", palabra);

    */
int main()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("%d-",i+1);
    }


    return 0;
}
