#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "funciones.h"



int ** reservarMemoria(int nFil, int nCol){

    int ** matriz;
    
    matriz=(int**)malloc(nFil*sizeof(int*));

    for(int i = 0; i < nFil; i++){
        matriz[i] = (int*)malloc(nCol*sizeof(int*));
    }

    return matriz;

}

void rellenaMatriz(int **matriz, int nFil, int nCol){
    srand(time(NULL));

    for(int i = 0; i < nFil; i++){
        for(int j=0; j<nCol; j++){
            matriz[i][j]=rand()%20+1;
        }
    }
}

void imprimeMatriz(int **matriz, int nFil, int nCol){
 for(int i = 0; i < nFil; i++){
     printf("|");
    for(int j = 0; j<nCol; j++){
        printf("%d",matriz[i][j]);
        printf("|");
    }
    printf("\n");
 }   
}

int * minCol(int **matriz, int nFil, int nCol){
    int *min;
    
    min=(int*)malloc(nCol*sizeof(int));

    for(int j = 0; j < nCol; j++){
        min[j]=matriz[0][j];
        for(int i = 0; i < nFil; i++){
            if(min[j]>matriz[i][j]){
                min[j]=matriz[i][j];
            }
        }
    }

    return min;
}

void liberarMemoria(int **matriz, int nFil){
    for(int i = 0; i<nFil; i++){
        free(matriz[i]);
    }
    free(matriz);
}