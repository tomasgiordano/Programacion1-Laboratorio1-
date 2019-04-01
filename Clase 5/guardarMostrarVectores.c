#include "guardarMostrarVectores.h"

void guardarVector(int numeros[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("\n%d",&numeros[i]);
    }
}

void mostrarVector(int numeros[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("\nPosicion [%d] = %d",i,numeros[i]);
    }
}

int buscarMaximo(int numeros[],int tam)
{
    int i;
    int flag=0;
    int maximo;

    for(i=0;i<tam;i++)
    {
        if(flag==0)
        {
            maximo=numeros[i];
            flag=1;
        }
        else if(numeros[i]>maximo)
        {
            maximo=numeros[i];
        }
    }
    return maximo;
}

int buscarValor(int numeros[],int tam,int valor)
{
    int indiceValor=-1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(valor==numeros[i])
        {
            indiceValor=i;
            break;
        }
    }
    return indiceValor;
}
