// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 11/10/2023   Fecha fin: 17/10/2023
// En este programa solo mandamos a llamar las funciones del la libreria JoseLib.h.
// LMJ_A10_01_432

#define P 500
#define N 100
#include "JoseLib.h"

//**********************LAS FUNCIONES DE LA JoseLib.h******************************************************************
int msg();
void menu();
int validaL(long ri, long rf, const char msg[], const char msgError[]);
int validaInt(int ri, int rf, const char msg[], const char msgError[]);
int busqSec(Tkey *vect, int tam, long matricula);
int ordenarR(Tkey registros[], int tam, int band);
int agregarR(Tkey registros[], int tam);
int agregarM(Tkey registros[], int tam);
int eliminarEsp(char cadena[]);
int soloLetras(char cadena[]);
int existeTkey(long mat, Tkey *reg, int tam);
Tkey datosR(Tkey registros[], int tam);
Tkey datosM(Tkey registros[], int tam);
void validaCad(char cadena[], const char *msg);
void burbuja(Tkey vect[], int tam);
void quickSort(Tkey registros[], int limIzq, int limDer);
void buscarR(Tkey registros[], int tam);
void imprimirR(Tkey vect[], int tam);
void eliminarR(Tkey registros[], int tam);
void archivo(Tkey vect[],int tam);
//**********************************************************************************************************************


//**********************************************************************************************************************
int main()
{
    menu();
    return 0;
}
//**********************************************************************************************************************


//**********************************************************************************************************************
int msg()
{
    //Aqui hacemos la estructura de los datos a llenar en el programa.
    int op;

    printf("\tMENU\n1-Cargar\n2-Ordenar\n3-Imprimir\n4-Buscar\n5-Eliminar\n0-Salir\n");

    op = validaInt(0,6,"Escoge una de la opcion\n","Error, no escogiste una de las opciones");

    return op;
}
//**********************************************************************************************************************


//**********************************************************************************************************************
void menu()
{
    //Aqui elegimos las funciones a elegir en el programa.
    Tkey reg[P];
    int op, band, tam;
    tam = 0;
    band = 0;

    do{
        op = msg();
        switch(op)
        {
            case 1:
                tam = agregarR(reg, tam);
                tam = agregarM(reg, tam);
                break;
            case 2:
                band = ordenarR(reg, tam, band);
                break;
            case 3:
                imprimirR(reg, tam);
                break;
            case 4: 
                buscarR(reg, tam);
                break;
            case 5:
                eliminarR(reg, tam);
                break;
            case 0:
                printf("Has escogido salir del menu");
                break;
        }
        
    }while (op != 0);
}