#include <stdio.h>
#include <stdlib.h>

int sumarNumeros(int,int);

int main()
{
    int resultado;

    resultado=sumarNumeros (void);

    printf("El resultado es: %d", resultado);
}

int sumarNumeros(void)
{
    int numero1;
    int numero2;

    printf("Ingrese un numero: ");
    scanf("%d",&numero1);
    printf("\nIngrese otro numero: ");
    scanf("%d",&numero2);

    resultado=numero1+numero2;


}
