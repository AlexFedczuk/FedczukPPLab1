#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    char descripcion[20];
}eTipo;

typedef struct
{
    int id;
    char nombreColor[20];
}eColor;

typedef struct
{
    int id;
    char nombre[20];
    //idTipo validar
    //idColor validar
    int edad;
}eMascota;

typedef struct
{
    int id;
    char descripcion[25];
    float precio;
}eServicio;

typedef struct
{
    int id;
    //idMascota(debe existir) validar
    //idServisio (debe existir) validar
    int fecha;
}eTrabajo;

char mostrarMenu();

int pedirDiaFecha();
int pedirMesFecha();
int pedirAnioFecha();
void mostrarFechaIngresada(int dia,int mes,int anio);
void pedirFechaIngreso(int tam,int dia,int mes,int anio);

int pedirId();
void pedirDescripcion(char string[]);
void validarId(int idIngresado,int numeroCriterio,char mensajeError[]);
void pedirTipo(int tam,int id,char descripcion[]);

void pedirNombreColor(char string[]);
void pedirColor(int tam,int id,char string[]);
void validarColor(char string[]);

void pedirNombreMascota(char string[]);
int pedirEdadMascota();
void pedirMascota(int tam,int id,char string[],int edad);

float pedirPrecio();
void pedirServicio();

int main()
{
    char opcion;
    int bandera;

    bandera=0;

    eFecha fechaIngreso[TAM];
    eTipo tipo[TAM];
    eColor color[TAM];
    eMascota mascota[TAM];
    eServicio servicio[TAM];
    eTrabajo trabajo[TAM];//Aqui me he quedado...

    do
    {
        opcion=mostrarMenu();

        switch(opcion)
        {
            case 'A':

                pedirFechaIngreso(TAM,fechaIngreso[i].dia,fechaIngreso[i].mes,fechaIngreso[i].anio);

                pedirTipo(TAM,tipo[i].id,tipo[i].descripcion);

                pedirColor(TAM,color[i].id,color[i].nombreColor);

                pedirMascota(TAM,mascota[i].id,mascota[i].nombre,mascota[i].edad);

                pedirServicio(TAM,servicio[i].id,servicio[i].descripcion,servicio[i].precio);












                bandera=1;
                break;

            case 'B':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            case 'C':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            case 'D':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            case 'E':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            case 'F':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            case 'G':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            case 'H':

            case 'I':
                if(bandera==1)
                {
                    //desarrollo
                }else
                {
                    printf("\nError! No se puede elegir esta opcion sin antes haber hecho una alta!\n");
                }

                break;

            default:
                break;
        }
        system("pause");
        system("cls");
    }
    while(opcion=='A' || opcion=='B' || opcion=='C' || opcion=='D' || opcion=='E' || opcion=='F' || opcion=='G' || opcion=='H' || opcion=='I');

    return 0;
}

//Tipos (Ave, Perro, Gato, Roedor, Pez)
//Colores (Negro, Blanco, Gris, Rojo, Azul)
//Servicios (Corte: $250, Desparasitado: $300, Castrado: $400)
char mostrarMenu()
{
    char opcion;

    printf("\nA. ALTAS MASCOTAS\n");
    printf("B. MODIFICAR MASCOTA\n");

    printf("C. BAJA MASCOTA\n");
    printf("D. LISTAR MASCOTAS\n");
    printf("E. LISTAR TIPOS\n");
    printf("F. LISTAR COLORES\n");
    printf("G. LISTAR SERVICIOS");
    printf("H. ALTA TRABAJO");

    printf("I. LISTAR TRABAJOS");
    fflush(stdin);
    scanf("%c",&opcion);

    return opcion;
}

int pedirDiaFecha()
{
    int dia;

    printf("Ingrese el dia: ");
    scanf("%d",&dia);

    return dia;
}

int pedirMesFecha()
{
    int mes;

    printf("Ingrese el mes: ");
    scanf("%d",&mes);

    return mes;
}

int pedirAnioFecha()
{
   int anio;

    printf("Ingrese el anio: ");
    scanf("%d",&anio);

    return anio;
}

void mostrarFechaIngresada(int dia,int mes,int anio)
{
    printf("La fecha ingresada es: %2d/%2d/%4d",dia,mes,anio);

    return void;
}

void pedirFechaIngreso(int tam,int dia,int mes,int anio)
{
   for(int i=0;i<tam;i++)
    {
        dia=pedirDiaFecha();

        mes=pedirMesFecha();

        anio=pedirAnioFecha();

        mostrarFechaIngresada(dia,mes,anio);
    }

    return void;
}

int pedirId()
{
    int numeroIngresado;

    printf("Ingrese id: ");
    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}
void pedirDescripcion(char string[])
{
    printf("Ingrese descripcion: ");
    fflush(stdin);
    fgets(string,20,stdin);

    return void;
}

void validarId(int idIngresado,int numeroCriterio,char mensajeError[])
{
    do
    {
        if(idIngresado<numeroCriterio)
        {
            printf("%s",mensajeError);
            idIngresado=pedirId()
        }
    }
    while(idIngresado<numeroCriterio);

    return void;
}

void pedirTipo(int tam,int id,char descripcion[],int numeroCriterio,char mensajeError[])
{
    for(int i=0;i<tam;i++)
    {
        id=pedirId();

        pedirDescripcion(descripcion);

        validarId(id,numeroCriterio,mensajeError);
    }

    return void;
}//Falta arreglar...

void pedirNombreColor(char string[])
{
    printf("Ingrese el color: ");
    fflush(stdin);
    fgets(string,20,stdin);

    return void;
}

void pedirColor(int tam,int id,char string[])
{
    for(int i=0;i<tam;i++)
    {
        id=pedirId();

        pedirNombreColor(string);

        validarNombreColor(string);
    }

    return void;
}

void validarNombreColor(char string[])
{
   do
   {
        if(string[0]=='N' || string[0]=='B' || string[0]=='G' || string[0]=='R' || string[0]=='A')
        {

        }else
        {
            printf("Error! Ese color es invalido!");
            pedirNombreColor(string);

        }
   }
   while(string[0]!='N' || string[0]!='B' || string[0]!='G' || string[0]!='R' || string[0]!='A');
}

void pedirNombreMascota(char string[])
{
    printf("Ingrese el nombre de la mascota: ");
    fflush(stdin);
    fgets(string,20,stdin);

    return void;
}

int pedirEdadMascota()
{
    int numeroIngresado;

    printf("Ingrese la edad de la mascota: ");
    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}

void pedirMascota(int tam,int id,char string[],int edad)
{
    for(int i=0;i<tam;i++)
    {
        id=pedirId();

        pedirNombreMascota(string);

        edad=pedirEdadMascota();
    }

    return void;
}

float pedirPrecio()
{
    float precioIngresado;

    printf("Ingrese el precio del servicio: ");
    scanf("%.2f",&precioIngresado);

    return precioIngresado;
}//Falta modificar...

void pedirServicio(int tam,int id,char descricion,float precio)
{
    for(int i=0;i<tam;i++)
    {
        id=pedirId();
        validarId(id,20000,"Error! El id ingresode esta por debajo del 20000");
        pedirDescripcion(descricion);
        precio=pedirPrecio();
    }

    return void;
}


