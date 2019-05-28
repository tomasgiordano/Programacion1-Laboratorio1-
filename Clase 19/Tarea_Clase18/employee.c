#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

int addEmployee(eEmployee* pEmployee,int id,char name[20], float salary)
{
    int validation=0;
    pEmployee=(eEmployee*)malloc(sizeof(eEmployee));
    if(pEmployee!=NULL)
    {
        validation=1;
        set_id(pEmployee,id);
        set_name(pEmployee,name);
        set_salary(pEmployee,salary);
    }
    return validation;
}

int set_id(eEmployee* pEmployee,int id)
{
    int validation=1;

    pEmployee->id=id;

    return validation;
}

int set_name(eEmployee* pEmployee,char name[20])
{
    int validation=1;

    strcpy(pEmployee->name,name);

    return validation;
}

int set_salary(eEmployee* pEmployee,float salary)
{
    int validation=1;

    pEmployee->salary=salary;

    return validation;
}

eEmployee* get_id(eEmployee* pEmployee)
{

    return 0;
}

eEmployee* get_name(eEmployee* pEmployee)
{
    return 0;
}

eEmployee* get_salary(eEmployee* pEmployee)
{
    return 0;
}

int delete_Employee(eEmployee* pEmployee)
{
    int validation=0;
    if(pEmployee!=NULL)
    {
        pEmployee=NULL;
        validation=1;
    }
    return validation;
}


