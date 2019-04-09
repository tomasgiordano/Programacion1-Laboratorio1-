#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pedirCadena(char[],char[],int);

int main()
{
    int i=0;
    char apellido[20];
    char nombre[20];
    char apellidoNombre[50]="";

    char auxCadena[100];

    pedirValidarCadena("nombre: ",nombre,20);
    pedirValidarCadena("apellido: ",apellido,20);

    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);

    strlwr(apellidoNombre);
    apellidoNombre[0]=toupper(apellidoNombre[0]);

    while(apellidoNombre[i]!='\0')
    {
        if(apellidoNombre[i]==0  || apellidoNombre[i-1]==' ')
        {
            apellidoNombre[i]=toupper(apellidoNombre[i]);
        }
        i++;
    }

    puts(apellidoNombre);
}


void pedirValidarCadena(char mensaje[],char cadena[],int tam)
{
    int i=0;

    char ingrese[10]="Ingrese ";
    strcat(ingrese,mensaje);
    printf(ingrese);

    fflush(stdin);

    scanf("%[^\n]",cadena);

    while(strlen(cadena)>tam)
    {
        printf(ingrese);
        scanf("%[^\n]",cadena);
    }


}
