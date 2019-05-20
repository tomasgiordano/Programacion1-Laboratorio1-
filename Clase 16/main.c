#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char letra;
}eDato;

void mostrar(eDato*);

int main()
{
    eDato unDato={1,'C'};
    eDato* pDato;
    pDato=&unDato;
    printf("%d--%c\n",pDato->numero,pDato->letra);

    eDato muchosDatos[3]={{1,'C'},{1,'B'},{1,'A'}};
    eDato* pMuchosDatos;
    pMuchosDatos=muchosDatos;

    mostrar(pMuchosDatos);

    return 0;
}

void mostrar(eDato *pMuchosDatos)
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("%d--%c\n",(pMuchosDatos+i)->numero,(pMuchosDatos+i)->letra);
    }
}
