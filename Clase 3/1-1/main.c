#include <stdio.h>
#include <stdlib.h>

//Prototipo o firma

//tipo_de_dato identificador ([parametros]);

int sumarNumeros(int,int);

int main()
{
    int unNumero;
    int otroNumero;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&unNumero);
    printf("\nIngrese otro numero: ");
    scanf("%d",&otroNumero);

    resultado=sumarNumeros(unNumero,otroNumero);

    printf("\nEl resultado es: %d", resultado);

    return 0;
}

int sumarNumeros (int numeroUno,int numeroDos)
{
    int resultado;

    resultado=numeroUno+numeroDos;

    return resultado;
}
