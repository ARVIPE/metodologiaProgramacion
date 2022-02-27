#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 30

int numDigit(char *cad)
{
    int nDigit = 0;
    for (int i = 0; i < cad[i] != '\0'; i++)
    {
        if ((isdigit(cad[i])) != 0)
        {
            nDigit++;
        }
    }
    return nDigit;
}

int numMayus(char *cad)
{
    int nMay = 0;
    for (int i = 0; i < cad[i] != '\0'; i++)
    {
        if ((isupper(cad[i]) != 0))
        {
            nMay++;
        }
    }
    return nMay;
}

int numMin(char cad[])
{
    int nMin = 0;
    for (int i = 0; i < cad[i] != '\0'; i++)
    {
        if ((islower(cad[i])) != 0)
        {
            nMin++;
        }
    }
    return nMin;
}

int espacios(char cad[])
{
    int esp = 0;
    for (int i = 0; i < cad[i] != '\0'; i++)
    {
        if ((isspace(cad[i])) != 0)
        {
            esp++;
        }
    }
    return esp - 1;
}

int main(int argc, char const *argv[])
{
    char cad[MAX];
    printf("Introduzca una cadena de caracteres\n");
    fgets(cad, MAX, stdin);
    printf("Cadena introducida: ");
    printf("%s", cad);
    printf("\nNumero de digitos que tiene la cadena es de: %d\n", numDigit(cad));
    printf("\nNumero de mayusculas que tiene la cadena es de: %d\n", numMayus(cad));
    printf("\nNumero de minusculas que tiene la cadena es de: %d\n", numMin(cad));
    printf("\nNumero de espacios que tiene la cadena es de: %d\n", espacios(cad));
}