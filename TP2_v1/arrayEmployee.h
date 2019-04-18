typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}eEmployee;

int initEmployee(eEmployee* list,int len);
int addEmployee(eEmployee* list,int id,int len,char name[],char lastName[],float salary,int);
int findEmployeeById(eEmployee* list, int len,int id);
int removeEmployee(eEmployee* list, int len, int id);
int sortEmployees(eEmployee* list, int len, int order);
int printEmployees(eEmployee* list, int len);

