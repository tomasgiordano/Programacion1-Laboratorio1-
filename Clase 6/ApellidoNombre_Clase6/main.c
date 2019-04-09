#include <stdio.h>
#include <stdlib.h>
#define T 25
#include <string.h>

//char apellidoNombreAcomodados(char[], char[],int);

int main()
{
    char apellido[T];
    char nombre[T];
    char apellidoNombre[50];
    int len;
    int i;

    //NOMBRE
    printf("Ingrese su nombre: ");
    fgets(nombre,T,stdin);
    len=strlen(nombre);
    nombre[len-1]='\0';

    //APELLIDO
    printf("Ingrese su apellido: ");
    fgets(apellido,T,stdin);
    len=strlen(nombre);
    apellido[len-1]='\0';

    //NOMBRE
    for(i=0;i<T;i++)
    {
        if(i==0 || strcmp(nombre[i],' ')==0)
        {
            strupr(nombre[i]);
        }
        else
        {
            strlwr(nombre[i]);
        }
    }

    //APELLIDO
    for(i=0;i<T;i++)
    {
        if(i==0 || strcmp(nombre[i],' ')==0)
        {
            strupr(apellido[i]);
        }
        else
        {
            strlwr(apellido[i]);
        }
    }

    //CONCATENACION
    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);


    return 0;
}

/*
char apellidoNombreAcomodados(char nombre[], char apellido[],int tam)
{
    int i;
    char apellidoNombre[100];

    //NOMBRE
    for(i=0;i<tam;i++)
    {
        if(i=0 || (nombre[i-1])=='\n')
        {
             strupr(nombre[i]);
        }
        else
        {
            strlwr(nombre[i]);
        }
    }

    //APELLIDO
    for(i=0;i<tam;i++)
    {
        if(i=0 || (apellido[i-1])=='\n')
        {
            strupr(apellido[i]);
        }
        else
        {
            strlwr(apellido[i]);
        }
    }

    //CONCATENACION
    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);

    return apellidoNombre;
}
*/
