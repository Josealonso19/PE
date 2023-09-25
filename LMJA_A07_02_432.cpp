// Lopez Michel Jose Alonso   Matricula: 370650
// Fecha inicio: 20/09/2023   Fecha fin: 24/09/2023

// En este programa el usuario debe de Ingresar algo a una cadena declarada por nosotros mismos
// y ya en el programa debemos de debdemos de hacer 9 salidas todas en forma de menu, para que asi el usuario pueda
// elegir cual de las 9 opciones desea utilizar, como por ejemplo si el usuario escribe (jose) asi tal cual como 
// lo estoy detallando se podra hacer que este en Mayusculas al igual que en minusculas,voltear dicho valor puesto
// en la cadena y aun mas funciones, claro que usando la libreria string.h para asi poder hacer mejor dichas funciones
// y poder resolver los problemas que se plantearon.
// LMJA_A07_02_432

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//  ./actividad7/LMJA_A07_02_432

// PROTOTIPOS DE FUNCIONES //
void menu();
void mayusculas(char cadena[60]);
void minusculas(char cadena[60]);
void capital(char cadena[60]);
int tamaño(char cadena[60]);
void voltear(char cadena[60]);
void noespacios(char cadena[60]);
char permitir(char cadena[60]);
void todas(char cadena[60]);
void palindromo(char cadena[60]);

int main()
{
    menu();
}

//FUNCION DE MENU PRINCIPAL //
//************************************************************************************
void menu()
{
    int decision, i;
    char cadena[60];

    printf("1.- Convertir todos los caracteres a mayusculas \n");
    printf("2.- Convertir todos los caracteres a minusculas \n");
    printf("3.- Convertir cadena en la cadena CAPITAL \n");
    printf("4.- Contar la cantidad de caracteres de la cadena \n");
    printf("5.- Voltear cadena de caracteres al reves \n");
    printf("6.- Eliminar los espacios de la cadena \n");
    printf("7.- Validar la cadena para saber si es permitida o no \n");
    printf("8.- Realizar 5 de las opciones anteriores juntas \n");
    printf("9.- Imprimir si la cadena es palindromo o no \n");
    printf("\nCual de las acciones anteriores deseas realizar con la cadena que ingreses? Digita el numero correspondiente: \n");
    scanf("%d", &decision);

    printf("Dame una cadena de caracteres: ");
    fflush(stdin);
    fgets(cadena,60,stdin);

    switch(decision)
    {
        case 1:
            printf("\nElegiste la opcion 1");
            mayusculas(cadena);
            break;

        case 2:
            printf("\nElegiste la opcion 2");
            minusculas(cadena);
            break;

        case 3:
            printf("\nElegiste la opcion 3");
            capital(cadena);
            break;
        
        case 4:
            printf("\nElegiste la opcion 4");
            i = tamaño(cadena);
            printf("\nLa cadena de caracteres que ingresaste tiene %d caracteres", i);
            break;

        case 5:
            printf("\nElegiste la opcion 5");
            voltear(cadena);
            break;

        case 6:
            printf("\nElegiste la opcion 6");
            noespacios(cadena);
            break;

        case 7:
            printf("\nElegiste la opcion 7");
            permitir(cadena);
            break;

        case 8:
            printf("\nElegiste la opcion 8");
            todas(cadena);
            break; 

        case 9:
            printf("\nElegiste la opcion 9");
            palindromo(cadena);
            break; 

        default:
            break;
    }
}
//************************************************************************************

void mayusculas(char cadena[60])
{
    int i;
    printf("\n");
    for(i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 97)
        {
            if (cadena[i] <= 122)
            {
                cadena[i] = cadena[i] - 32;
                printf("%c" ,cadena[i]);
            }
        }
    }
}

void minusculas(char cadena[60])
{
    int i;
    printf("\n");
    for(i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 65)
        {
            if (cadena[i] <= 90)
            {
                cadena[i] = cadena[i] + 32;
                printf("%c" ,cadena[i]);
            }
        }
    }
}

void capital(char cadena[60])
{
    int i;
    printf("\n");
    cadena[0] = 67;
    cadena[1] = 65;
    cadena[2] = 80;
    cadena[3] = 73;
    cadena[4] = 84;
    cadena[5] = 65;
    cadena[6] = 76;
    cadena[7] = '\0';
    for(i = 0; cadena[i] != '\0'; i++)
    {
        printf("%c", cadena[i]);
    }
}

int tamaño(char cadena[60])
{
    printf("\n");
    int i;
    for(i = 0; cadena[i] != '\0'; i++);
    return i;
}

void voltear(char cadena[60])
{
    int i, t;
    printf("\n");
    t = tamaño(cadena);
    for (i = t-1; i >= 0; i--)
    {
        printf("%c", cadena[i]);
    }
}

void noespacios(char cadena[60])
{
    int i, t, aux, espacio;
    printf("\n");
    t = tamaño(cadena);
    for(i = 0; i < t; i++)
    {
        if (cadena[i] == 32)
        {
            espacio = i;
            aux = i;
            while (cadena[aux] == 32 && aux < t - 1)
            aux ++;
            cadena[espacio] = cadena[aux];
            cadena[aux] = 32;
        }
    }
    
    for(i = 0; cadena[i] != '\0'; i++)
    {
        printf("%c", cadena[i]);
    }
}

char permitir(char cadena[60])
{
    int i, t;
    t = tamaño(cadena);
    printf("\n");
    for(i = 0; cadena[i] != '\0'; i++)
    {

    if (cadena[0] == ' ' || cadena[t] == ' ')
    {
        printf("\nNO PERMITIDA, debe ser una cadenas sin espacios al inicio ni al final");
        cadena[i] = '\0';
    }
    
    if (cadena[i] == 32 && cadena[i-1] == 32)
    {
        printf("NO PERMITIDO, debe ser cadena sin espacios dobles");
        cadena[i] = '\0';
    }

    if (cadena[i] != 32 && (cadena[i] < 65 || cadena[i] > 122))
    {
        printf("\nNO PERMITIDO, solo caracteres alfabeticos");
        cadena[i] = '\0';
    }

    }

    printf("\n");
    for(i = 0; cadena[i] != '\0'; i++)
    {
        printf("%c", cadena[i]);
    }
    return cadena[60];

}

void todas(char cadena[60])
{
    int i;
    char original[60], original2[60], original3[60], original4[60];
    for (i = 0; cadena[i] != '\0'; i++)
    {
        original[i] = cadena[i];
        original2[i] = cadena[i];
        original3[i] = cadena[i];
        original4[i] = cadena[i];
    }
    noespacios(cadena);
    mayusculas(original);
    minusculas(original2);
    voltear(original3);
    capital(original4);

}

void palindromo(char cadena[])
{
    int i, j, k, g, h;
    char es;
    int t = tamaño(cadena);
    for (i = 0; i <= t; i++)
    {
        if (cadena[i] >= '1' && cadena[i] <= '9')
        {
            printf("Digita caracteres, no numeros");
            i = t;
        }
        if(cadena[i] > '9')
        {
            k = 1;
        }
    }

    if (k == 1)
    {
        for (i = 0; i <= t; i++)
        {
            if (cadena[i] != ' ' && cadena[i + 1] != ' ')
            {
                if (cadena[i] >= 'A' && cadena[i] <= 'Z')
                {
                    g = 1;
                }
                else
                {
                    printf("Digita la cadena solo con mayusculas\n");
                    i=t;
                }
            }
            else
            {
                printf("No utilizar dobles espacios en la cadena ");
                i=t;
                g=0;
            }
        }
    }

    if (g == 1)
    {
        int tam = tamaño(cadena);
        for (i = 0, j = tam - 1; i < j; i++, j--)
        {
            if (cadena[i] != cadena[j])
            {
                es = '0';
            }
            else
            {
                es = '1';
            }
        }

        if (es == '0')
        {
            printf("La cadena digitada NO es un palíndromo.\n");
        }
        if (es == '1')
        {
            printf("La cadena digitada SI es un palíndromo.\n");
        }
    }
}