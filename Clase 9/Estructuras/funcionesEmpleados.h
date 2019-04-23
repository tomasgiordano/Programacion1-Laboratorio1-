typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int idSector;
    char descripcion[20];
    int valorHora;

}eSectores;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int cantidadHoras;
    int idSector;
    int estado; // 1 OCUPADO // 0 LIBRE

} eEmpleado;
void inicializarEmpleados(eEmpleado[],int);
void crearEmpleado(eEmpleado[],int);
void mostrarEmpleado(eEmpleado[],int);
void mostrarTodos(eEmpleado[],int);
void darBaja(eEmpleado[],int);
void modificarSueldo(eEmpleado[],int);
void informar(eEmpleado[],int);

int buscarLibre(eEmpleado[],int);
int buscarLegajo(eEmpleado[],int,int);
float buscarImporteMaximo(eEmpleado[],int);
int buscarCantidadCarlos(eEmpleado[],int);

void mostrarMenu(void);

void mostrarMaximosSueldos(eEmpleado[],int);
void imprimirCarlos(eEmpleado[],int);
void hardcodearDatosEmpleados(eEmpleado lista[], int tam);

void inicializarSectores(void);
