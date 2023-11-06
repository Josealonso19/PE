// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 20/09/2023   Fecha fin: 24/09/2023

// En este programa el usuario debe de Ingresar algo a una cadena declarada por nosotros mismos
// y ya en el programa debemos de debdemos de hacer 10 salidas para que al momento de que cuando por ejemplo
// si el usuario escriba "Ensenda", el programa debera de usar ese valor dictado por el usuario y ponerlo
// de diferentes maneras, como por ejemplo que ponga Ensenada al reves adanesnE, y muchas mas salidas,claro
// que usando cadenas junto con el repertorio de funciones de la libreria string.h.
// LMJA_A07_01_432

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  ./actividad7/LMJA_A07_01_432

// Prototipos de funciones
//conjunto de funciones para realizar diferentes manipulaciones en la cadena ingresada por el usuario y 
//mostrarlas de diversas maneras. Cada función tiene un propósito específico y utiliza argumentos como la cadena original y 
//un mensaje para mostrar el resultado. 
int tam_cadena(char cadena[]);
void salida_numero1(char cadena[], char mensaje[]);
void salida_numero2(char cadena[], char mensaje[]);
void salida_numero3(char cadena[], char mensaje[]);
void salida_numero4(char cadena[], char mensaje[]);
void salida_numero5(char cadena[], char mensaje[]);
void salida_numero6(char cadena[], char mensaje[]);
void salida_numero7(char cadena[], char mensaje[]);
void salida_numero8(char cadena[], char mensaje[]);
void salida_numero9(char cadena[], char mensaje[]);
void salida_numero10(char cadena[], char mensaje[]);

int main()
{
    char cadena[40];

    printf("Ingrese una cadena: ");
    fflush(stdout);  // se utiliza para limpiar el búfer de salida estándar antes de utilizar fgets. Esto asegura que cualquier 
    //salida previa se haya mostrado antes de que se solicite la entrada del usuario.
    
    fgets(cadena,40 , stdin);
    
//Se declaran 10 variables char llamadas mensaje1, mensaje2, ..., mensaje10, que contienen mensajes de encabezado para cada una de 
//las 10 salidas que se van a generar. Estos mensajes se utilizarán como argumentos en las llamadas a las funciones de salida.
    char mensaje1[] = "Salida 1: \n";
    char mensaje2[] = "Salida 2: \n";
    char mensaje3[] = "Salida 3: \n";
    char mensaje4[] = "Salida 4: \n";
    char mensaje5[] = "Salida 5: \n";
    char mensaje6[] = "Salida 6: \n";
    char mensaje7[] = "Salida 7: \n";
    char mensaje8[] = "Salida 8: \n";
    char mensaje9[] = "Salida 9: \n";
    char mensaje10[] = "Salida 10: \n";

//Estas funciones se encargan de realizar las diferentes manipulaciones de la cadena y mostrar los resultados en función de los 
//mensajes proporcionados.
    salida_numero1(cadena, mensaje1);
    salida_numero2(cadena, mensaje2);
    salida_numero3(cadena, mensaje3);
    salida_numero4(cadena, mensaje4);
    salida_numero5(cadena, mensaje5);
    salida_numero6(cadena, mensaje6);
    salida_numero7(cadena, mensaje7);
    salida_numero8(cadena, mensaje8);
    salida_numero9(cadena, mensaje9);
    salida_numero10(cadena, mensaje10);

    return 0;
}

int tam_cadena(char cadena[]) //Aqui se calcula la longitud o tamaño de la cadena.
{
    int i;
    for(i = 0; cadena[i] != '\0'; i++); //Se pone ; para asi solo retornar el tamaño de la cadena con la varaible i.
    return i;
}

//Aqui se imprime lo escrito en la cadena de manera Normal:
void salida_numero1(char cadena[], char mensaje[]) //Aqui ponemos tal cual el valor agregado en la cadena
{
     int i;
    printf("\n%s\n ", mensaje);
    for (i = 0; cadena[i] != '\0'; i++)
    {
        printf("%c", cadena[i]);
    }
    printf("\n");
}

//Aqui se imprime lo escrito en la cadena al revez:
void salida_numero2(char cadena[], char mensaje[])
{
    int i, t;
    printf("\n %s \n", mensaje);
    t = tam_cadena(cadena); //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    for (i = t-1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
    printf("\n");
}

//Aqui se imprime lo escrito en la cadena de manera vertical:
void salida_numero3(char cadena[], char mensaje[])
{
    int i, t;
    printf("\n %s \n", mensaje);
    t = tam_cadena(cadena); //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    for (i = 0; cadena[i] != '\0'; i++)
    {
        printf("%c\n", cadena[i]);
    }
    printf("\n");
}

//Aqui se imprime lo escrito en la cadena al revez pero de manera vertical:
void salida_numero4(char cadena[], char mensaje[])
{
    int i, t;
    printf("\n %s \n", mensaje);
    t = tam_cadena(cadena); //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    for (i = t-1; i >= 0; i--)
    {
        printf("%c\n", cadena[i]);
    }
    printf("\n");
}

//Aqui se imprime lo escrito en la cadena desde lo escrito hasta la ultima letra:
void salida_numero5(char cadena[], char mensaje[])
{
    int i, j, t;
    t = tam_cadena(cadena); //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    printf("\n %s \n", mensaje);
    for(i = t; i >= 0; i--)
    {
// iniciaste otro bucle for con la variable de control j inicializada a 0. Este bucle se ejecuta mientras j sea menor o igual a i, 
//lo que significa que imprimirás los primeros i+1 caracteres de la cadena.
        for(j = 0; j <= i; j++)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}

//Aqui se imprime lo escrito en la cadena desde lo escrito hasta la ultima letra
,pero todo al revez:
void salida_numero6(char cadena[], char mensaje[])
{
    int i, j, t;
    t = tam_cadena(cadena); //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    printf("\n %s \n", mensaje);
    for(i = 0; i <= t; i++)
    {
        for(j = t; j >= i; j--)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}

//Aqui se imprime lo escrito en la cadena desde lo escrito hasta la ultima letra
,pero poco a poco quitando la primera letra hasta quedar con la ultima letra de la derecha:
void salida_numero7(char cadena[], char mensaje[])
{
    int i, j, t;
    t = tam_cadena(cadena);  //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    printf("\n %s \n", mensaje);
    for(i = 0; i <= t; i++)
    {
        for(j = i; j <= t; j++)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}

//Aqui se imprime lo escrito en la cadena desde lo escrito hasta la ultima letra
,pero poco a poco quitando la primera letra hasta quedar con la ultima letra de la derecha (pero haciendo la frase al revez):
void salida_numero8(char cadena[], char mensaje[])
{
    int i, j, t;
    t = tam_cadena(cadena);  //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    printf("\n %s \n", mensaje);
    for(i = 0; i <= t; i++)
    {
        for(j = t; j >= i; j--)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}

//Aqui se imprime lo escrito en la cadena solo la segunda,tercera,quinta y sexta letra:
void salida_numero9(char cadena[], char mensaje[])
{
     int i, j, t;
    t = tam_cadena(cadena); //Asignamos a la variable t para saber el tamaño o longitud de la cadena.
    printf("\n %s \n", mensaje);

    for(i = 0; i <= t; i++)
    {

        if(cadena[i] == 'a' || cadena[i] == 'A' || cadena[i] == 'e' || cadena[i] == 'E' || cadena[i] == 'i' || cadena[i] == 'I' || cadena[i] == 'o' || cadena[i] == 'O' || cadena[i] == 'u' || cadena[i] == 'U')
        {

            printf("%c",cadena[i]);

        }

    }
    printf("\n");

    
    for(i = 0; i <= t; i++)
    {

        if(cadena[i] != 'a' && cadena[i] != 'A')
        {

            if(cadena[i] != 'e' && cadena[i] != 'E')
            {

                if(cadena[i] != 'i'&& cadena[i] != 'I')
                {

                    if(cadena[i] != 'o' && cadena[i] != 'O')
                    {

                        if(cadena[i] != 'u' && cadena[i] != 'U')
                        {

                            printf("%c",cadena[i]);
                        }

                    }
                }

            }
        }
    
    }

}

//Aqui se imprime lo escrito en la cadena solo la primera,cuarta,sexta y octava letra:
void salida_numero10(char cadena[],char mensaje[]) {
    int longitud = strlen(cadena);
    printf("\n%s\n ", mensaje);

    for (int i = 0; i < longitud; i++) 
    {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') 
        {

            printf("%c%c", cadena[i], cadena[i]);

        } 
        
        else
        {
            if (cadena[i] >= 'a' && cadena[i] <= 'z') 
            {

                    printf("%c%c", cadena[i], cadena[i]);
                    
            }
        }
    }
}
