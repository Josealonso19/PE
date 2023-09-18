// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 13/09/2023   Fecha fin: 17/09/2023
// En este programa utilizamos las estructuras de control de iteracion , en este caso para los tres tipos de casos diferentes
// que existian hice el mismo programa pero usando los tres ciclos (for,do-while y while), claro que en el caso de este
// programa utilizamos tres diferentes menus para los tres diferentes programas, la sentencia fibonacci, sacar el factorial
// de un numero y sacar el numero de digitos de un numero dado por el usuario, claro que todos los programas los mandamos 
// a llamar en base a otra funcion desde el main principal.  
// LMJ_A06_01_432

#include <stdio.h>
#include <stdlib.h>
#define N 10

//  ./practica7/LMJ_A06_01_432 
//****** PROTOTIPOS DE FUNCIONES  ******
int msges();
void menu();
void Menu_Fibonacci (void);
void Menu_Factorial (void);
void Menu_Digitos (void);

void fibonacci_for (void);
void fibonacci_do_while (void);
void fibonacci_while (void);

void factorial_for (void);
void factorial_do_while (void);
void factorial_while (void);

void digitos_for (void);
void digitos_do_while (void);
void digitos_while (void);



//****  main principal  *********
int main()
{
   menu();

	return 0;
}
//  *** DESARROLLO DE LAS FUNCIONES  ******
//*********************
int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");
  printf("1.- FIBONACCI \n");
  printf("2.- FACTORIAL \n");
  printf("3.- DIGITOS \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&op);
  return op;
}
//****************
void menu()
{
  int op;
  do{
      op=msges();
      switch (op)
      {
        case 1:
              Menu_Fibonacci();
              break;
        case 2:
              Menu_Factorial();
              break;
        case 3:
              Menu_Digitos();
              break;

      }

    }while (op != 0);


}





//******************** LOS MENU DE LOS TRES DIFERENTES PROGRAMAS ************************
//*********************
void Menu_Fibonacci (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    int op;
    //  AQUI DESARROLLO PROGRAMA  
    do{
      printf("   FIBONACCI\n"); 
    printf("1.-Fibonacci for \n");
    printf("2.-Fibonacci do while \n");
    printf("3.-Fibonacci while \n");
    printf("0.-Regresar al menu principal \n");
        scanf("%d",&op);

      switch (op)
      {
        case 1:
              fibonacci_for();
              break;
        case 2:
              fibonacci_do_while();
              break;
        case 3:
              fibonacci_while();
              break;

      }
    }while (op != 0);    
    system ("PAUSE");
}
//*********************


//*********************
void Menu_Factorial (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    int op;
    //  AQUI DESARROLLO PROGRAMA  
    do{
      printf("   FACTORIAL\n"); 
    printf("1.-Factorial for \n");
    printf("2.-Factorial do while \n");
    printf("3.-Factorial while \n");
    printf("0.-Regresar al menu principal \n");
        scanf("%d",&op);

      switch (op)
      {
        case 1:
              factorial_for();
              break;
        case 2:
              factorial_do_while();
              break;
        case 3:
              factorial_while();
              break;

      }
    }while (op != 0);    
    system ("PAUSE");
}
//*********************


//*********************
void Menu_Digitos (void)
{
    //  VARIALES LOCALES 
    system ("CLS");
    int op;
    //  AQUI DESARROLLO PROGRAMA  
    do{
      printf("   DIGITOS\n"); 
    printf("1.-Digitos for \n");
    printf("2.-Digitos do while \n");
    printf("3.-Digitos while \n");
    printf("0.-Regresar al menu principal \n");
        scanf("%d",&op);

      switch (op)
      {
        case 1:
              digitos_for();
              break;
        case 2:
              digitos_do_while();
              break;
        case 3:
              digitos_while();
              break;

      }
    }while (op != 0);    
    system ("PAUSE");
}
//*********************
//****************************************************************************************








//************************************** FUNCIONES DE LOS PROGRAMAS *************************************************
//----------Todas las funciones de la serie Fibonacci------------------
void fibonacci_for (void)
{
//Declarar variables
system ("cls");
int r,a,s,i,numero;
r=0;
a=-1;
s=1;

printf("FIBONACCI FOR \n");
printf("Por favor dame el numero de veces que tendra la sentencia fibonacci \n");
scanf("%d",&numero);

  for(i=0;i<numero;i++)
  {
    r = a + s;
    a=s;
    s=r;

    printf("%d,",r);
  }

system ("PAUSE");

}

//---------------------------------------------------------------------

void fibonacci_do_while (void)
{
system ("cls");

int r,a,s,i,numero;
r=0;
a =-1;
s=1;

printf("FIBONACCI DO WHILE \n");
printf("Por favor dame el numero de veces que tendra la sentencia fibonacci \n");
scanf("%d",&numero);

  do 
  {

      r = a + s;
      printf("%d,",r);
      a=s;
      s=r;
      numero--;

  }while(numero!=0);

system ("PAUSE");
}

//-----------------------------------------------------

void fibonacci_while (void)
{
system ("cls");
int r,a,s,i,numero;
r=0;
a =-1;
s=1;

printf("FIBONACCI WHILE \n");
printf("Por favor dame el numero de veces que tendra la sentencia fibonacci \n");
scanf("%d",&numero);

  while(numero!=0)
  {
      r = a + s;
      printf("%d,",r);
      a=s;
      s=r;
      numero--;
  }
system ("PAUSE");
}
//*****************************************************************************



//******************** FUNCIONES DE LOS PROGRAMAS ****************************
//----------Todas las funciones de in numero factorial------------------
void factorial_for (void)
{
system ("cls");
int numero,i,factorial=1;

printf("FACTORIAL FOR \n");
printf("Dame el numero para sacar el factorial: \a");
  scanf("%d",&numero);

  if(numero <= 0)
  {
    printf("Técnicamente, no se puede sacar el factorial de un valor menor que cero \n");
    printf(", porque la función factorial se define sobre el conjunto de los (números naturales). \n");
    printf("Por favor ingresa un valor que sea mayor que cero.");
  }

  else
  {
    for(i=1;i<=numero;i++)
    {
      factorial = factorial * i;
    }

printf("El factorial del numero %d es: %d \n",numero,factorial);

}

system ("PAUSE");
}

void factorial_do_while (void)
{
system ("cls");

 int numero, factorial = 1;

    printf("Dame el numero para sacar el factorial: ");
    scanf("%d", &numero);

    // Verificar si el número es negativo
    if (numero < 0) 
    {
      printf("Técnicamente, no se puede sacar el factorial de un valor menor que cero \n");
      printf(", porque la función factorial se define sobre el conjunto de los (números naturales). \n");
      printf("Por favor ingresa un valor que sea mayor que cero.");
    } 

    else 
    {
        int i = 1;

        // Calcular el factorial utilizando un bucle do-while
        do {

            factorial = factorial * i;
            i++;

        } while (i <= numero);

        printf("El factorial de %d es: %d\n", numero, factorial);
    }


system ("PAUSE");
}

void factorial_while (void)
{
system ("cls");

printf("FACTORIAL WHILE \n");

int numero, factorial = 1;

    printf("Dame el numero para sacar el factorial: ");
    scanf("%d", &numero);

    // Verificar si el número es negativo
    if (numero < 0) 
    {

      printf("Técnicamente, no se puede sacar el factorial de un valor menor que cero \n");
      printf(", porque la función factorial se define sobre el conjunto de los (números naturales). \n");
      printf("Por favor ingresa un valor que sea mayor que cero.");

    } 

    else 
    {
        int i = 1;

        // Calcular el factorial utilizando un bucle while
        while (i <= numero) 
        {

            factorial = factorial * i;
            i++;

        } 

        printf("El factorial de %d es: %d\n", numero, factorial);
    }

system ("PAUSE");
}
//*****************************************************************************



//******************** FUNCIONES DE LOS PROGRAMAS ****************************
//----------Todas las funciones de digitos------------------
void digitos_for (void)
{
system ("cls");

printf("DIGITOS FOR \n");

int numero,contador;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Calcular la cantidad de dígitos
    for(contador = 0;numero != 0;contador++)
    {

      numero /= 10;

    }

    printf("El número tiene %d dígito(s).\n", contador);

system ("PAUSE");
}

void digitos_do_while (void)
{
system ("cls");

printf("DIGITOS DO WHILE \n");

int numero, contador = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Calcular la cantidad de dígitos
    do 
    {

        numero /= 10;
        contador++;

    } while (numero != 0);

    printf("El número tiene %d dígito(s).\n", contador);

system ("PAUSE");
}

void digitos_while (void)
{
system ("cls");

printf("DIGITOS WHILE \n");

 int numero, contador = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Calcular la cantidad de dígitos
    while(numero != 0)
    {

      numero /= 10;
      contador++;

    }

    printf("El número tiene %d dígito(s).\n", contador);
    system ("PAUSE");
}
//*****************************************************************************
