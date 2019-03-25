#include <stdio.h>
#include <stdlib.h>

/*

    //          EJEMPLO CLASE 1
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

    //          CADENAS DE CARACTERES
    char character;
    char palabra[16];

    printf("Ingrese un caracter: ");
    scanf("%c",&character);

    printf("Usted ingreso: %c",character);

    printf("\nIngrese una palabra: ");
    scanf("%s",&palabra);

    printf("Usted ingreso: %s", palabra);

    */

    /*

    //          FOR

    int i;

    for(i=0;i<10;i++)
    {
        printf("%d-",i+1);
    }

    */
int main()
{
    int numero;
    int contadorNumeros=0;
    int max;
    int min;
    int menorPositivos;
    int mayorNegativos;
    int acumuladorNegativos=0;
    int promedioNegativos;
    int contadorPares=0;
    int acumuladorPositivos=0;
    char seguir;

    do{
        printf("Ingrese un numero: ");
        scanf("%d",&numero);

        //VALIDACION 0

        while(numero==0)
        {
            printf("\nERROR. Ingrese un numero valido :");
            scanf("%d",&numero);

        }

        //PARES

        if(numero%2==0)
        {
            contadorPares++;
        }

        //CONTADOR

        contadorNumeros++;

        //SEGUIR

        printf("\nDesea continuar? (s/n): ");
        fflush(stdin);
        scanf("%c",&seguir);

    }while(seguir=='s');




    return 0;
}
