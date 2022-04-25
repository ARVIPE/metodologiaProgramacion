#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include "cabecera.h"

int main(){

    char fichero[64];
    int nEle, superior, inferior;


    printf("Introduce el nombre del fichero a crear: ");
    scanf("%s", fichero);

    printf("Introduce el numero de elementos aleatorios que tendra:");
    scanf("%i", &nEle);

    printf("Introduce el extremo superior del intervalo: ");
    scanf("%i", &superior);

    printf("Introduce el extremo inferior del intervalo: ");
    scanf("%i", &inferior);

    crearfichero(fichero, nEle, superior, inferior);

    return 0;

}