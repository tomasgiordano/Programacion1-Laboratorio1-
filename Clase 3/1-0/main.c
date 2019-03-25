#include <stdio.h>
#include <stdlib.h>

int sumarNumeros(int,int);

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("\nIngrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado=sumarNumeros(numeroUno,numeroDos);

    printf("\nEl resultado es: %d ",resultado);
}

void sumarNumeros(int numero1,int numero2)
{
    resultado=numero1+numero2;
}
