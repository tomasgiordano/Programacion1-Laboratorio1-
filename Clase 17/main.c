#include <stdio.h>
#include <stdlib.h>
#define ELEMENTS 5
int main()
{
    /*****************************--MALLOC-CALLOC-FREE--**********************************/

    /**<
    int* pNumero;
    pNumero = (int*) malloc(sizeof(int));
    *pNumero=99;

    printf("Heap-->pNumero: %d\n", pNumero);
    printf("Stack-->&pNumero: %d\n", &pNumero);

    if(pNumero!=NULL)
    {
        printf("Valor-->*pNumero: %d\n", *pNumero);
    }

    free(pNumero);
    printf("--Luego de hacer el free--");
    system("pause");

    printf("Heap-->pNumero: %d\n", pNumero);
    printf("Stack-->&pNumero: %d\n", &pNumero);

    if(pNumero!=NULL)
    {
        printf("Valor-->*pNumero: %d\n", *pNumero);
    }  */

    /*********************************************************************************/

    int* pNumeros;
    int* pAux;
    int i;
    int cont=0;

    pNumeros=(int*) malloc(sizeof(int)*5);
    pAux=pNumeros;

    if(pNumeros!=NULL)
    {
        for(i=0;i<ELEMENTS;i++)
        {
            //*(pNumeros+i)=i+1;
            printf("Ingrese un numero: ");
            scanf("%d",pNumeros+i);
        }

        pAux= (int*) realloc(pNumeros,sizeof(int)*(ELEMENTS+5));

        if(pAux!=NULL)
        {
            pNumeros= pAux;

            for(i=5;i<ELEMENTS+5;i++)
            {
                //*(pNumeros+i)=i+1;
                printf("Ingrese un numero: ");
                scanf("%d",pNumeros+i);
            }
            for(i=0;i<ELEMENTS+5;i++)
            {
                printf("%d\n",(*(pNumeros+i)));
            }
            free(pAux);
        }
        else
        {
            for(i=0;i<ELEMENTS;i++)
            {
                printf("%d\n",(*(pNumeros+i)));
            }
            free(pAux);
        }
    }
    return 0;
}
