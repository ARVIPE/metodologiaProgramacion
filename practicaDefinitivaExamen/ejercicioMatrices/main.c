#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"

int main(){

int nFil, nCol;
int **matriz;
int *min;

printf("Introduzca el numero de filas: \n");
scanf("%i", &nFil);

printf("Introduzca el numero de columnas: \n");
scanf("%i", &nCol);

matriz=reservarMemoria(nFil, nCol);
rellenaMatriz(matriz, nFil, nCol);
imprimeMatriz(matriz,nFil,nCol);
min=minCol(matriz, nFil, nCol);
printf("Los menores de cada columna son: \n");
for(int i = 0; i<nFil; i++){
    printf("%d\n", min[i]);
}
liberarMemoria(matriz, nFil);
free(min);

}