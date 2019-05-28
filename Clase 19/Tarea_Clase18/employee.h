        //ESTRUCTURAS//
typedef struct
{
    int id;
    char name[20];
    float salary;

}eEmployee;
        //CONSTRUCTOR//
int addEmployee(eEmployee*,int,char[],float);
        //DESTRUCTOR//
int delete_Employee(eEmployee*);
        //SETTERS//
int set_id(eEmployee*,int);
int set_name(eEmployee*,char[]);
int set_salary(eEmployee*,float);
        //GETTERS//
eEmployee* get_id(eEmployee*);
eEmployee* get_name(eEmployee*);
eEmployee* get_salary(eEmployee*);
