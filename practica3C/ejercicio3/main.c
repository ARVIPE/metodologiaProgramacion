#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"

int main(){

char fichero[64];

printf("Introduzca nombre del fichero:\n");
scanf("%s", fichero);

printf("La media de los valores pares del fichero es: %f\n", mediaFichero(fichero));


}