#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"

int main(){

int nFil, nCol;
int **matriz;
int *min;


printf("Introduce el numero de filas");
scanf("%d", &nFil);

printf("Introduce el numero de columnas");
scanf("%d", &nCol);

matriz=reservarMemoria(nFil, nCol);
rellenarMatriz(matriz, nFil, nCol);
imprimeMatriz(matriz, nFil, nCol);
min=minCol(matriz, nFil, nCol);
printf("Los menores de cada columna son: \n");
for(int i = 0; i<nCol; i++){
    printf("%d,", min[i]);
}
free(min);
liberarMemoria(matriz, nFil);

}