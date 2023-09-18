// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 13/09/2023   Fecha fin: 17/09/2023
// En este programa utilizamos las estructuras de control de iteracion, pero aparte de eso implementamos cosas como 
// gets(cadena) que es como nuestro scanf, ya que si usamos scanf no podremos utilizar tantos datos, a diferencia de que
// utilizemos cadenas, tambien antes de eso es recomendable utilizar el fflush(stdin) lo cual limpia la basura que se pueda
// llegar a guardar en la cadena, despues utilizamos atoi lo que hace es que convertamos los valores char de la cadena que 
// declaramos para convertirlos a enteros o a lo que se ocupe convetir.Cabe recalcar que tambien se debe de utilizar la 
// la libreria <string.h> para que todas estas cosas que implementamos puedan funcionar en nuestros programas.
// LMJ_A06_02_432

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define NUM_ALUMNOS 40
#define NUM_UNIDADES 5

// ./practica7/LMJ_A06_02_432

//*** PROTOTIPOS DE FUNCIONES  ******
int msges();
void menu();
void Examen_denivelacion (void);
void limpiarBuffer (void);
void limpiarBuffer2 (void);
void esperarTecla (void);
void limpiarPantalla (void);
void Tabla_de_multiplicar (void);
void Media_aritmetica (void);
void Turistas (void);
void Promedio_del_Alumno (void);
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
  printf("1.- Conocer la cantidad de alumnos que no tienen derecho a examen de nivelacion: \n");
  printf("2.- Tabla de multiplicar de un numero dado por el usuario: \n");
  printf("3.- Sacar la media aritmetica \n");
  printf("4.- Turistas \n");
  printf("5.- Promedio del alumno \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&op);
  return op;
  system ("pause");
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
              Examen_denivelacion();
              break;
        case 2:
              Tabla_de_multiplicar();
              break;
        case 3:
              Media_aritmetica();
              break;
        case 4:
              Turistas();
              break;
         case 5:
              Promedio_del_Alumno();
              break;

      }

    }while (op != 0);


}




//**********************************************************************************************************
void Examen_denivelacion (void)
{
    system ("cls");
    //  VARIALES LOCALES
    int calificaciones[NUM_ALUMNOS][NUM_UNIDADES];
    int promedios[NUM_ALUMNOS];
    int countNoExamen = 0;

    // Leer calificaciones de cada alumno en las 5 unidades
    for (int i = 0; i < NUM_ALUMNOS; i++) 
    {

        printf("Ingrese las calificaciones para el alumno %d (en el formato 'calif1 calif2 calif3 calif4 calif5'): ", i + 1);

        for (int j = 0; j < NUM_UNIDADES; j++) 
        {

            if (scanf("%d", &calificaciones[i][j]) != 1)
            {

                printf("Error al leer calificación. Asegúrese de ingresar números.\n");

            }

        }

        limpiarBuffer();  // Limpiar el buffer del teclado

    }

    // Calcular promedios y contar los que no tienen derecho al examen de nivelación
    for (int i = 0; i < NUM_ALUMNOS; i++)
    {

        int suma = 0;

        for (int j = 0; j < NUM_UNIDADES; j++) 
        {

            suma += calificaciones[i][j];

        }

        promedios[i] = suma / NUM_UNIDADES;

            if (promedios[i] < 50) 
            {
                countNoExamen++;
            }
    }

    printf("\nCantidad de alumnos que no tienen derecho al examen de nivelación: %d\n", countNoExamen);
    system ("PAUSE");
}

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


//**********************************************************************************************************
void Tabla_de_multiplicar (void)
{
system ("cls");
    for (int numero = 1; numero <= 10; numero++)
    {
        limpiarPantalla();
       
        printf("TABLA DEL %d\n\n", numero);

        for (int i = 1; i <= 10; i++) 
        {

            printf("%d * %d = %d\n", numero, i, numero * i);

        }

        esperarTecla();
        system ("PAUSE");
    }
}

void limpiarPantalla() 
{
    // Limpiar pantalla imprimiendo caracteres especiales para simular la limpieza
    printf("\033[H\033[J");
}

void limpiarBuffer2()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void esperarTecla() 
{
    printf("PRESIONA UNA TECLA PARA CONTINUAR.\n");
    getchar();  // Espera a que el usuario presione una tecla
}
//**********************************************************************************************************


void Media_aritmetica (void)
{
    system ("cls");
    //  VARIALES LOCALES 
int numeros[100];  // Se asume un máximo de 100 números
    int cantidadNumeros = 0;
    int suma = 0;
    int rangoInicio, rangoFin;

    // Obtener el rango del usuario
    printf("Ingrese el rango (inicio fin): ");
    char input[100];
    gets(input);
    sscanf(input, "%d %d", &rangoInicio, &rangoFin);

    // Leer números y calcular la suma y la cantidad de números dentro del rango
    while (1) 
    {
        limpiarPantalla();

        printf("Ingrese un número (o -1 para terminar): ");
            gets(input);

        int numero = atoi(input);

        if (numero == -1) 
        {

            break;

        }

        if (numero >= rangoInicio && numero <= rangoFin) 
        {

            numeros[cantidadNumeros] = numero;
            suma += numero;
            cantidadNumeros++;

        }
    }

    // Calcular la media aritmética
    float media = (float)suma / cantidadNumeros;

    // Mostrar resultados
    limpiarPantalla();
    printf("Suma de los números dentro del rango: %d\n", suma);
    printf("Media aritmética de los números dentro del rango: %.2f\n", media);

    esperarTecla();
    system ("PAUSE");
}


//**********************************************************************************************************


void Turistas (void)
{
    system ("cls");
 int maxTuristas = 10;
    int maxPesoTotal = 700;

    int pesoTuristas[10];
    int totalTuristas = 0;
    float pesoTotal = 0.0;

    printf("Ingrese el peso de cada turista:\n");

    for (int i = 0; i < maxTuristas; i++)
    {
        printf("Peso del turista %d (en kg): ", i + 1);
        char input[100];

        gets(input);

        int peso = atoi(input);

        // Verificar que el peso no exceda el 15% del límite de peso
        if (peso > maxPesoTotal * 1.15) 
        {

            printf("El peso excede el 15%% del límite permitido. El turista %d no puede abordar.\n", i + 1);
            break;
        }

        // Verificar si se supera el límite de turistas
            if (totalTuristas >= maxTuristas) 
            {

                printf("Se ha alcanzado el límite máximo de turistas (10 personas).\n");
                break;
            }

        pesoTuristas[i] = peso;
        totalTuristas++;
        pesoTotal += peso;
    }

    // Calcular el promedio de peso de los turistas
    float promedioPesoTuristas = pesoTotal / totalTuristas;

    // Mostrar resultados
    printf("\nPromedio de peso de los turistas: %.2f kg\n", promedioPesoTuristas);
    
    if (totalTuristas == maxTuristas) 
    {

        printf("Se ha alcanzado el límite máximo de turistas.\n");
    } 
    
        if (pesoTotal > maxPesoTotal)
        {

            printf("Se ha alcanzado el límite máximo de peso (700 kg).\n");
        }
        system ("PAUSE");
}


//**********************************************************************************************************
void Promedio_del_Alumno (void)
{
    system ("cls");
     int intentos = 3;
    int calificaciones[3];
    float sumaCalificaciones = 0;

    // Leer las calificaciones de los exámenes parciales
    for (int i = 0; i < intentos; i++) 
    {
        printf("Ingrese la calificación del examen parcial %d: ", i + 1);
        char input[100];
        gets(input);

        calificaciones[i] = atoi(input);

        sumaCalificaciones += calificaciones[i];
    }

    // Calcular el promedio
    float promedio = sumaCalificaciones / intentos;

    // Determinar el mensaje para el alumno
    if (promedio >= 60) 
    {
        printf("Aprobado. Promedio final: %.2f\n", promedio);
    } 
    
        if (promedio >= 40) 
        {
            printf("Repetir materia. Promedio final: %.2f\n", promedio);
        } 
    
        else 
        {
            printf("Baja temporal. Promedio final: %.2f\n", promedio);
        }
        system ("PAUSE");
}