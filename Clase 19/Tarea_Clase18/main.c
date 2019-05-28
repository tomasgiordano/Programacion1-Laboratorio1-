#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

int main()
{
    FILE* archivoTXT;
    FILE* archivoBIN;
    int id;
    char name[20];
    float salary;
    int validationAdd;
    char empleado[50];

    eEmployee* pEmployee;

    printf("--CREACION DE EMPLEADO--\n\n");
    printf("Datos del empleado:\n");
    printf("ID: ");
    scanf("%d",&id);
    fflush(stdin);
    printf("Nombre:");
    gets(name);
    printf("Salario: ");
    scanf("%f",&salary);

    validationAdd=addEmployee(pEmployee,id,name,salary);

    if(validationAdd==1)
    {
        printf("\nEmpleado creado con exito!\n\n");
    }
    else
    {
        printf("\nNo se pudo guardar el empleado.\n");

    }

    /**ESCRIBO EL TXT*/
    archivoTXT=fopen("empleados.txt","w");
    fprintf(archivoTXT,"EMPLEADO:\nId: %d.\nNombre: %s.\nSalario: %f.",pEmployee->id,pEmployee->name,pEmployee->salary);
    fclose(archivoTXT);

    /**LEO EL TXT*/
    archivoTXT=fopen("empleados.txt","r");
    printf("\n\nLECTURA ARCHIVO TXT\n\n");
    while(feof(archivoTXT))
    {
        fgets(empleado,50,archivoTXT);
        printf("%s",empleado);
    }
    system("pause");

    /**ESCRIBO EL BIN*/
    archivoBIN=fopen("empleados.bin","wb");
    fwrite(pEmployee,sizeof(eEmployee),1,archivoBIN);
    fclose(archivoBIN);

    /**LEO EL BIN*/
    archivoBIN=fopen("empleados.bin","rb");
    fread(pEmployee,sizeof(eEmployee),1,archivoBIN);
    fclose(archivoBIN);
    printf("\n\nLECTURA ARCHIVO BIN\n\n");
    printf("EMPLEADO:\nId:%d\nNombre:%s\nSalario:%f.",pEmployee->id,pEmployee->name,pEmployee->salary);
    return 0;
}
