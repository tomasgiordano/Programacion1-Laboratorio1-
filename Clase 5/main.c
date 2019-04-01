#include <stdio.h>
#include <stdlib.h>
#define T 5
#include "guardarMostrarVectores.h"

int main()
{
    int numeros[T];
    int i;
    int maximo;
    int valor;
    int indiceValor;

    guardarVector(numeros,T);
    mostrarVector(numeros,T);
    maximo=buscarMaximo(numeros,T);

    printf("\n\nEl maximo ingresado fue: %d", maximo);

    printf("\n\nIngrese un valor y le informaremos su posicion en el vector: ");
    scanf("%d",&valor);

    indiceValor=buscarValor(numeros,T,valor);

    printf("\nEl valor %d esta en la posicion %d.",valor,indiceValor);

    return 0;
}

