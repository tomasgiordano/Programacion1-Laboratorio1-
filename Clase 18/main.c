#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*                      //ESCRITURA DE TEXTO//

    FILE* miArchivo;
    char nombre[20]={"Tomas"};

    miArchivo=fopen("C:\\Users\\alumno\\Desktop\\Programacion1-Laboratorio1-\\Clase 17\\Lista_De_Nombres.txt","w");
    fprintf(miArchivo,"Nombre: %s",nombre);
    fclose(miArchivo);

    */

    /*                      //LECTURA DE TEXTO//

    FILE* miArchivo;
    char nombre[20];

    miArchivo=fopen("C:\\Users\\alumno\\Desktop\\Programacion1-Laboratorio1-\\Clase 18\\Lista_De_Nombres.txt","r");

    while(!feof(miArchivo))
    {
        fgets(nombre,30,miArchivo);
        printf("%s",nombre);
    }
    fclose(miArchivo);

    */


    /******************************************************************************************************************/


    /*                  //ESCRITURA BINARIO//

    FILE* miArchivo;
    int x=4;
    miArchivo=fopen("datos.bin","wb");
    fwrite(&x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    */

                        //LECTURA BINARIO//

    /*
    FILE* miArchivo;
    int* x;

    x=(int*)malloc(sizeof(int));
    miArchivo=fopen("datos.bin","rb");
    fread(x,sizeof(int),1,miArchivo);
    fclose(miArchivo);

    printf("%d",*x);
    */

    /******************************************************************************************************************/

    return 0;
}
