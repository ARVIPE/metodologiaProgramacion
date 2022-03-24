#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"

int main(){

int nFil, nCol;
int** matriz;


printf("Introduce el numero de filas");
scanf("%d", &nFil);

printf("Introduce el numero de columnas");
scanf("%d", &nCol);

matriz=reservarMemoria(nFil, nCol);
rellenarMatriz(matriz, nFil, nCol);
imprimeMatriz(matriz, nFil, nCol);

}