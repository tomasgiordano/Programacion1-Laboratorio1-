typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado; // 1 OCUPADO // 0 LIBRE

} eEmpleado;

void mostrarEmpleado(eEmpleado[],int);
void mostrarTodos(eEmpleado[],int);
void crearEmpleado(eEmpleado[],int);
void darBaja(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);
void mostrarMenu(void);
void inicializarEmpleados(eEmpleado[],int);
void modificarSueldo(eEmpleado[],int);
int buscarLegajo(eEmpleado[],int,int);
float buscarImporteMaximo(eEmpleado[],int);
void mostrarMaximosSueldos(eEmpleado[],int);
int buscarCantidadCarlos(eEmpleado[],int);
void imprimirCarlos(eEmpleado[],int);
void informar(eEmpleado[],int);
void hardcodearDatosEmpleados(eEmpleado lista[], int tam);
