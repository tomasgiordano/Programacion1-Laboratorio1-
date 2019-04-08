#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
    int valores[T]={10,50,30,70,40,20,100,90,60,80};

    ordenarVector(T,valores);
    mostrarVector(T,valores);

    return 0;
}

void ordenarVector(int tam, int valores[])
{
    int i,j;
    int auxiliar;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(valores[i]>valores[j])
            {
              auxiliar=valores[i];
              valores[i]=valores[j];
              valores[j]=auxiliar;
            }
        }
    }
}

void mostrarVector(int tam,int valores[])
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("\n%d",valores[i]);
    }

}
