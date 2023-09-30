// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 27/09/2023   Fecha fin: 30/09/2023

// En este programa el usuario debera ingresar solo diez datos para llenar el vector uno y llenara la matriz, en cambio
//la computadora aleatoriamente llenara el vector dos y tambien lo hara en base al vector 1 y 2 para despues emprimirlos
//, tambien cuando el usuario llenara la matriz la computadora imprimira la matriz en base a el vector 1 y2.
// LMJA_A08_01_432

//-----------------------Librerias-----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define M 10
//-------------------------------------------------------------------
//   ./semana8/LMJ_A08_01_432

//*********************************************************************************************************
void menu();
void LlenarVector1_Manualmente (int vect1[],int m);
void LlenarVector2_Aleatoriamente (int vect2[],int m);
bool Sin_repetir ();
void LlenarVector3_ConVector1_Y_VECTOR2 (int vect1[],int vect2[],int vect3[]);
void Imprimir_Vectores (int vect1[],int vect2[],int vect3[]);
void LlenaMatriz_4X4 (int vect1[],int vect2[],int vect3[],int m[][4]);
void Imprimir_Matriz (int m[][4]);
//********************************************************************************************************

//****************************************  Main principal  **********************************************
int main()
{
   menu();
	return 0;
}
//********************************************************************************************************

//*****************FUNCIONES******************************************************************************
//*****************El menu donde mandaremos a llamar a todas las demas funciones**************************
void menu()
{
   int op;
    int vect1[M], vect2[M], vect3[20];  // Declaración de vectores aquí
    int m[4][4];  // Declaración de la matriz aquí
    do {
        system("CLS");
        printf("   M  E   N   U \n");
        printf("1.- LLENAR VECTOR 1 (MANUALMENTE)\n");
        printf("2.- LLENAR VECTOR 2 ALEATORIAMENTE\n");
        printf("3.- LLENAR VECTOR 3 (CON VECTOR1 Y VECTOR2)\n");
        printf("4.- IMPRIMIR VECTORES\n");
        printf("5.- LLENA MATRIZ 4 X 4\n");
        printf("6.- IMPRIMIR MATRIZ\n");
        printf("0.- SALIR\n");
        printf("ESCOGE UNA OPCION: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                LlenarVector1_Manualmente(vect1, M);
                break;

            case 2:
                LlenarVector2_Aleatoriamente(vect2, M);
                break;

            case 3:
                LlenarVector3_ConVector1_Y_VECTOR2(vect1, vect2, vect3);
                break;

            case 4:
                Imprimir_Vectores(vect1, vect2, vect3);
                break;

            case 5:
                LlenaMatriz_4X4 (vect1,vect2,vect3,m);
                break;    

            case 6:
                Imprimir_Matriz (m);
                break;             

            case 0:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
            
        }
    } while (op != 0);
}
//********************************************************************************************************

//--------------------------------------------------------------------------------------------------------
void LlenarVector1_Manualmente(int vect1[], int m) 
{
    system("CLS");
    int i,numero;
    printf("Escogiste llenar vector manualmente\nDame 10 numeros entre el 10 y 70\n");
    for (i = 0; i < m; i++) {
        scanf("%d",&numero);
        if(numero >=10 && numero <=70)
        {
            vect1[i]= numero;
        }
        else
        {
            printf("Tu numero no esta en el rango\n");
        }
    }
    system("PAUSE");
}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
bool Sin_repetir(int vect2[],int n)
{
    int i;
    for (i = 0; i <10; i++)
    {
        if (n == vect2[i])
        {
            return true;
        }            
    }
    return false;
}

void LlenarVector2_Aleatoriamente (int vect2[],int m)
{
  system("CLS");  
int i,numero; 
srand(time(NULL)); 

printf("Escogiste llenar vector aleatoriamente\n");
    
    for(i=0;i<m;i++)
    {
        do
        {
            numero=1+rand()%20; 
        } while (Sin_repetir(vect2,numero));
        vect2[i]=numero;  
    }
        system("PAUSE");            
    }
    
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
void LlenarVector3_ConVector1_Y_VECTOR2 (int vect1[],int vect2[],int vect3[])
{
int i,x,numero;
x=20;
system("CLS");
printf("Escogiste llenar vector uno y dos\n");
for(i=0;i<10;i++)
{
vect3[i]=vect1[i];

}

for(i=0;i<10;i++)
{
vect3[i+10]=vect2[i]; 
}

system("PAUSE");
}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
void Imprimir_Vectores (int vect1[],int vect2[],int vect3[])
{
    int v,i,m,x;
    do{
    system("CLS");
    printf("Que vector deseas usuario\n Vector 1,Vector 2,Vector 3\n");
    scanf("%d",&v);

    switch (v)
    {
    case 1:
    printf("Escogiste el vector uno\n");
     m=10;
    for(i=0;i<m;i++)
    {
        printf("%2d:[%3d]\n",i+1,vect1[i]);  //i+1 es para que no se vea el cero 
    }
        break;
    case 2:
    printf("Escogiste el vector dos\n");
     m=10;
     for(i=0;i<m;i++)
    {
        printf("%2d:[%3d]\n",i+1,vect2[i]); //i+1 es para que no se vea el cero  
    }
        break;
    case 3:
    printf("Escogiste el vector tres\n");

    x=20;

    for(i=0;i<x;i++)
    {
        printf("%2d:[%3d]\n",i+1,vect3[i]); //i+1 es para que no se vea el cero  
    }
        break;        
    
    default:
        break;
    }

    system("PAUSE");
    }while(v != 0);

}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
void LlenaMatriz_4X4 (int vect1[],int vect2[],int vect3[],int m[][4])
{
int i,j,k;
system("CLS");
k=0;
printf("Escogiste matriz de cuatro por cuatro\n");
for(i=0;i<2;i++)
{
    for(j=0;j<4;j++)
    {
        m[i][j]=vect1[k];
        k++;
    }
}
k=0;
for(i=2;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        m[i][j]=vect2[k];
        k++;
    }
    printf("\n");
}

system("PAUSE");
}
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
void Imprimir_Matriz (int m[][4])
{
int i,j;
system("CLS");
printf("Escogiste imprimir matriz\n");

for(i=0;i<4;i++)
{
    printf("%2d: ",i);
    for(j=0;j<4;j++)
    {
        printf("[%3d]",m[i][j]);
    }
    printf("\n");
}

system("PAUSE");
}
//--------------------------------------------------------------------------------------------------------