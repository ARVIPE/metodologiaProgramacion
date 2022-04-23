#include<stdio.h>
#include "cabecera.h"
#define MAX 50


int main(){

char cadena[50];
char letra[1];
int cont=0;

printf("Introduzca una cadena de caracteres");
fgets(cadena, MAX, stdin);
cadena[strlen(cadena) - 1] = '\0';

printf("Introduzca un caracter");
fgets(letra, 1, stdin);
letra[strlen(letra) - 1] = '\0';






}