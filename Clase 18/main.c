#include <stdio.h>
#include <stdlib.h>

int main()
{
                         //ESCRITURA DE TEXTO//
/*
    FILE* miArchivo;
    char nombre[20]={"Tomas"};

    miArchivo=fopen("Lista_De_Nombres.txt","w");
    fprintf(miArchivo,"Nombre: %s",nombre);
    fclose(miArchivo);
*/


                      //LECTURA DE TEXTO//
/*
    FILE* miArchivo;
    char nombre[20];

    miArchivo=fopen("Lista_De_Nombres.txt","r");

    while(!feof(miArchivo))
    {
        fgets(nombre,30,miArchivo);
        printf("%s",nombre);
    }
    fclose(miArchivo);

*/


    /******************************************************************************************************************/


                      //ESCRITURA BINARIO//
/*
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

                                                    /**  TAREA  */

                /**  ESTRUCTURA eEmpleado que guarde un empleado en un txt y en un bin y lea en txt y en bin*/

    return 0;
}
