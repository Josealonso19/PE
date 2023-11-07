// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 04/10/2023   Fecha fin: 09/10/2023

// En este programa mandaremos a llamar la libreria JoseLib.h en donde ya solo nos preocuparemos por mandar a
// llamar a dichas funciones para asi no tener poblemas mayores en este programa.

// LMJ_A09_01_432
//   ./semana9/LMJ_A09_01_432

#include "JoseLib.h" //Declaramos al libreria que yo hice.
#define M 15 
#define N 4 //Declaramos los mismos valores constantes de la fila y de la columna para el vector y para la matriz.

int main()
{
    int vectorLlenado = 0; // Variable para rastrear si el vector se ha llenado
    int matrizLlenada = 0; // Variable para rastrear si la matriz se ha llenado

    int decision, vect[M], m, matriz[4][4]; // Declaramos las variables,el vector y la matriz
    char cadena[30]; //Tambien declaramos una cadena de tipo caracter.

    do{
        printf("\n          MENU\n           ");

        printf("Hola usuario, bienvenido al programa numero nueve\n");
        printf("cual de las siguientes opciones deseas usar:\n");
        printf("1.- Llenar un vector aleatoriamente con 15 numeros del 100 al 200 sin repetir:\n");
        printf("2.- LLenar matriz 4x4 con numeros aleatorios del 1 al 16 sin repetir:\n");
        printf("3.- Imprimir el vector de 15 numeros:\n");
        printf("4.- Imprimir la matriz de 4x4:\n");
        printf("5.- Ordenar el vector de 15 numeros:\n");
        printf("6.- Buscar un valor especifico en el vector de 15 numeros:\n");
        printf("0.- SALIR\n");
            scanf("%d", &decision); //Aqui es donde se eligira una de las 7 opciones,una a la vez-

        switch(decision) //En base a lo elegido, prepare un switch para asi la opcion que eleiga se cumpla y se ponga en dicha funcion.
        {
            case 1:
                printf("\nHas escogido la opcion 1");
                llenar_vect_aleatorio(vect, M, 100, 200);
                vectorLlenado = 1; // Marcar el vector como llenado
                system("PAUSE");
                break;

            case 2:
                printf("\nHas escogido la opcion 2");
                llenar_matriz(matriz, M+1, 0, 16); //Para llenar la matriz matriz con números aleatorios dentro del rango [0, 16].
                matrizLlenada = 1; // Marcar la matriz como llenada
                system("PAUSE");
                break;
            
            case 3:
                printf("\nHas escogido la opcion 3");

                if (vectorLlenado) 
                {
                    imprimir_vect(vect, M);
                } 
                else 
                {
                    printf("El vector no ha sido llenado. Por favor, elige la opción 1 primero.\n");
                }
                system("PAUSE");
                break;
            
            case 4:
                printf("\nHas escogido la opcion 4");

                if (matrizLlenada) 
                {
                    imprimir_mat(matriz, M - 11, N);
                } 
                else 
                {
                    printf("La matriz no ha sido llenada. Por favor, elige la opción 2 primero.\n");
                }
                system("PAUSE");
                break;

            case 5:
                printf("\nHas escogido la opcion 5");

                if (vectorLlenado) 
                {
                    ordenar(vect, M);
                } 
                else 
                {
                    printf("El vector no ha sido llenado. Por favor, elige la opción 1 primero.\n");
                }
                system("PAUSE");
                break;

            case 6:
                printf("\nHas escogido la opcion 6");

                if (vectorLlenado) 
                {
                    buscar(vect, M);
                } 
                else 
                {
                    printf("El vector no ha sido llenado. Por favor, elige la opción 1 primero.\n");
                }
                system("PAUSE");
                break;

            case 0:
                printf("\nNos vemos luego usuario.");
                break;
            
            default:
                printf("Lo siento usuario pero no puedes elegir esa opcion solo puedes elegir las opciones\n");
                printf("1,2,3,4,5,6,7 y en caso de que desees salire elige 0.");
        }

    }while(decision != 0);
}
