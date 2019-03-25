#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);
float sacarPromedio(int,int);
int aprobarMateria(int,int);
void ejercicioUno(void);

int main()
{
    ejercicioUno();
}

int pedirNota(void)
{
    int nota;

    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    while(nota>10 || nota<0)
    {
        printf("ERROR. Ingrese una nota valida: ");
        scanf("%d", &nota);
    }

    return nota;
}

float sacarPromedio(int suma,int cantidad)
{
    float promedio;

    promedio=(float)suma/cantidad;


    return promedio;
}

int aprobarMateria(int notaMinima ,int nota)
{
    if(nota>=notaMinima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void ejercicioUno(void)
{
    int nota;
    int notaMinima=6;
    int contador=0;
    int contadorAprobados=0;
    float promedioAprobados;
    float promedioDesaprobados;
    int acumuladorAprobados=0;
    int acumuladorDesaprobados=0;
    int contadorDesaprobados=0;

    do{

        nota=pedirNota();
        if(aprobarMateria(notaMinima,nota)==1)
        {
            contadorAprobados++;
            acumuladorAprobados=acumuladorAprobados+nota;
        }
        else
        {
            contadorDesaprobados++;
            acumuladorDesaprobados=acumuladorDesaprobados+nota;
        }

        contador++;
    }while(contador<5);

    promedioAprobados=sacarPromedio(acumuladorAprobados,contadorAprobados);
    promedioDesaprobados=sacarPromedio(acumuladorDesaprobados,contadorDesaprobados);

    printf("La cantidad de aprobados es: %d", contadorAprobados);
    printf("\nPromedio de notas de aprobados es: %.2f", promedioAprobados);
    printf("\nPromedio de notas de desaprobados es: %.2f", promedioDesaprobados);

}
