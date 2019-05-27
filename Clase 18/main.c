#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    FILE* miArchivo;
    char nombre[20]={"Tomas"};

    miArchivo=fopen("C:\\Users\\alumno\\Desktop\\Programacion1-Laboratorio1-\\Clase 17\\Lista_De_Nombres.txt","w");
    fprintf(miArchivo,"Nombre: %s",nombre);
    fclose(miArchivo);
    */

    /******************************************************************************************************************/


    FILE* miArchivo;
    char nombre[20];

    miArchivo=fopen("C:\\Users\\alumno\\Desktop\\Programacion1-Laboratorio1-\\Clase 17\\Lista_De_Nombres.txt","r");

    fgets(nombre,30,miArchivo);
    fgets(nombre,30,miArchivo);

    fclose(miArchivo);

    printf("%s",nombre);


    return 0;
}
