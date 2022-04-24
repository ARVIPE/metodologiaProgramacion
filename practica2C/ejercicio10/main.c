#include<stdio.h>
#include<string.h>
#include "cabecera.h"
#define MAX 50


int main(){

char cadena[MAX];
char letra[2];
int count;

printf("Introduzca una cadena de caracteres\n");
fgets(cadena, MAX, stdin);
cadena[strlen(cadena) - 1] = '\0';

printf("Introduzca un caracter\n");
scanf("%s", letra);

int size=strlen(cadena);

count = contadorCaracteres(cadena, letra, size);

printf("El caracter %s aparece %i veces", letra, count);

}