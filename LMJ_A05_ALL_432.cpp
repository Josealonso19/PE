// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 10/09/2023   Fecha fin: 11/09/2023

// En este programa le damos al usuario las cuatro opciones diferentes de los cuatro
// programas diferentes, todo esto usando (funciones), pero sobre todo estructuras de 
// control repetitivas, en este caso usando la sentencia (For) en los cuatro programas
// , tambien he de aclarar que en el (main principal) solo mandamos a llamar una funcion
// que manda a llamar otra funcion que manda a llamar los cautro programas dependiendo el 
// que elijamos y con una interfaz tipo menu, pero lleno un poco mas a fondo en los programas
// he de decir que en todos los programas utilizamos el ciclo for, usando las formas para 
// adaptarlo segun el programa que se nos este pidiendo, ya que no en todos los casos es la 
// misma de forma de opera la sentencia for.

// LMJ_A05_ALL_432

//Aqui declaramos las librerias con su herramientas que nos ayudaran a lo largo del programa.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//*** PROTOTIPOS DE FUNCIONES  *******************
int msges();
void menu();
void Numerospositivos (void);
void Cuarenta_numeros_aleatorios_paroimpar (void);
void Treintaycinco_numeros_aleatorios_mayorymenor (void);
void Tabla_de_multiplicar (void);

//************************************************ todos los números enteros positivos menores de n en orden descendente. 






//****  MAIN PRINCIPAL ****************************
int main()
{
    menu();
    srand(time(NULL));
	return 0;

}
//*************************************************






//*************************************************************************************************************
//  *** DESARROLLO DE LAS FUNCIONES DE MENSAJES Y MENU ******
int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");

  printf("1.- Numeros enteros positivos menores a nuestro valor dado. \n");

  printf("2.- 40 numeros aletorios entre el 0 y el 200 \n");

  printf("3.- 35 numeros aleatorios entre el 100 y el 200 \n");

  printf("4.- Tabla de multiplicar de algun valor dado por la computadora entre el 1 y el 20. \n");

  printf("0.- SALIR  \n");

  printf("ESCOGE UNA OPCION: ");
    scanf ("%d",&op);

  return op;
}
//************************************************************************************************************






//************************************************************************************************************
// ********* FUNCION PARA QUE EL USUARIO PUEDA ELEGIR LOS DISTINTOS PROGRAMAS ***********
void menu()
{
  int op;
  do{

      op=msges();
        switch (op)
        {

            case 1:
                Numerospositivos();
            break;


            case 2:
                Cuarenta_numeros_aleatorios_paroimpar();

            break;


            case 3:
                Treintaycinco_numeros_aleatorios_mayorymenor();

            break;


            case 4:
                Tabla_de_multiplicar();

            break;

        }

    }while (op != 0);
    
}
//*********************************************************************************************************






// *********************** P R O G R A M A S *****************************************************************
//************************************************************************************************************
//  * Función en C que pida al usuario el valor de n, y desplegar todos los números enteros positivos menores 
//    de n en orden descendente.*

void Numerospositivos ()
{
    //  VARIALES LOCALES 
    system ("CLS");

    int n,i;

    printf("Hola usuario, bienvenido al programa en el que te damos todos los numeros enteros \n");
    printf("positivos menores al numero que tu elijas \n");

    printf("Dame un numero entero positivo: \n");
        scanf("%d",& n);

    printf("Numeros enteros positivos menores que %d en orden descendente:\n", n);


    for(i=n-1 ; i>0 ; i--)
    {

        printf("%d\n", i);

            if(i <= 0)
            {

                printf("Lo siento usuario, pero debes ingresar un numero entero positivo mayor que 0.\n");

            }

    }
    
    system ("PAUSE");
}
//**********************************************************************************************************






//**********************************************************************************************************
//  ******  Función en "C" que genere 40 números aleatorios entre el 0 y 200, desplegar los números y la leyenda 
// de cada número si es par o impar , la cantidad de los números pares e impares así como la suma de los números 
// pares o impares. ******

void Cuarenta_numeros_aleatorios_paroimpar (void)
{

    //  VARIALES LOCALES 
    system ("CLS"); 
    int cantidad_numeros = 40;
    int numero;
    int pares = 0;
    int impares = 0;
    int sumaPares = 0;
    int sumaImpares = 0;


    printf("Hola usuario bienvenido al programa que te despliega 40 numeros aleatorios entre el 0 y 200 \n");
    printf("y calcula la cantidad de numeros pares e impares y sus respectivas sumas. \n");


    // Generar 40 números aleatorios entre 0 y 200 y determinar si son pares o impares
    printf("Numeros generados y su paridad:\n");

    for(int i = 0 ; i < cantidad_numeros ; i++)
    {
        numero = rand() % 201; //Numeros aleatorios entre el 0 y el 200
        printf("%d",numero);

        if (numero % 2 == 0) 
        {
            printf("(Par)\n");
            pares++;
            sumaPares = sumaPares + numero;
        } 

        else 
        {
            printf("(Impar)\n");
            impares++;
            sumaImpares = sumaImpares + numero;
        }

    }
   

//Aqui desplegamos todas las sumas de los numeros pares e impares y sus cantidades aparte.
    printf("\nCantidad de numeros pares: %d\n", pares);

    printf("Cantidad de numeros impares: %d\n", impares);

    printf("Suma de los numeros pares: %d\n", sumaPares);

    printf("Suma de los numeros impares: %d\n", sumaImpares);
  
    system ("PAUSE");
}


//*******************************************************************************************************






//*******************************************************************************************************
// ** Función en "C" que genere N (35) cantidad de números (100 -200), desplegar al final el número 
// mayor y el número menor **

void Treintaycinco_numeros_aleatorios_mayorymenor (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    int n=35, i,numeros;
    int nmayor=100;
    int nmenor=200;
  
    printf("Hola usuario, bienvenido al programa que te despliega 35 numeros del 100 al 200 y detecta cual \n");
    printf("es el numero mayor y menor \n");

    printf("Numeros: \n");

    for(i=0 ; i<n ; i++)
    {

        numeros = rand() % 100 + 101; //Numeros aleatorios entre el 100 y el 200
        printf("%d\n  ",numeros);


        if(numeros > nmayor)
        {

            nmayor = numeros;

        }
        

        if(numeros < nmenor)
        {

            nmenor = numeros;

        }

    }             


    printf("\n Numero mayor: %d\n", nmayor);

    printf("Numero menor: %d\n", nmenor);              

    system ("PAUSE");

}
//*********************************************************************************************************






//*********************************************************************************************************
//  *** Función en "C" que despliegue la tabla de multiplicar de un número dado (número entre el 1 y 20) ***

void Tabla_de_multiplicar (void)
{
    system ("CLS"); 
   
    printf("Hola usuario bienvenido al programa que imprime la tabla de multiplicar de un valor dado  \n");
     printf("por la computadora que este entre el 1 y el 20 para que lo multiplique desde el uno hasta el diez. \n");

    // Generar un número aleatorio entre 1 y 20
    int numeroAleatorio = (rand() % 20) + 1;

    printf("Tabla del %d:\n", numeroAleatorio);
    for (int i = 1; i <= 10; i++)
     {
        printf("%d * %d = %d\n", numeroAleatorio, i, numeroAleatorio * i);
    }

    

    system ("PAUSE");    
}

//********************************************************************************************************






