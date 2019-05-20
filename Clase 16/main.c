#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int numero;
    char letra;
}eDato;

void mostrar(eDato*,int);
void mostrarUno(eDato*,int);
void ordenarPorLetra(eDato*,int);

int main()
{
    //eDato unDato={1,'C'};
    //eDato* pDato;
    //pDato=&unDato;
    //printf("%d--%c\n",pDato->numero,pDato->letra);

    eDato muchosDatos[3]={{1,'C'},{1,'B'},{1,'A'}};

    ordenarPorLetra(muchosDatos,3);
    mostrar(muchosDatos,3);
    printf("----------------------\n");
    mostrarUno(muchosDatos,2);
    printf("----------------------\n");

    return 0;
}

void mostrar(eDato *pMuchosDatos,int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        mostrarUno(pMuchosDatos,i);
    }
}

void mostrarUno(eDato *pMuchosDatos,int indice)
{
    printf("%d)%d--%c\n",indice+1,(pMuchosDatos+indice)->numero,(pMuchosDatos+indice)->letra);
}

void ordenarPorLetra(eDato *pMuchosDatos,int tam)
{
    int i;
    int j;

    eDato copy;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if((pMuchosDatos+i)->letra > (pMuchosDatos+j)->letra)
            {
                 copy=*(pMuchosDatos+i);
                *(pMuchosDatos+i)=*(pMuchosDatos+j);
                *(pMuchosDatos+j)=copy;
            }
        }
    }
}
