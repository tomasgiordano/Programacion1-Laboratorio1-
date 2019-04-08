#include <stdio.h>
#include <stdlib.h>

int main()
{

    char palabra[5], otraPalabra[100]="programacion";
    int len;

    printf("Ingrese una palabra: ");
    gets(palabra);

    strcpy(palabra,otraPalabra);

    len=strlen(palabra);
    printf("La palabra es: %s\nCantidad de caracteres: %d",palabra,len);

    return 0;
}
