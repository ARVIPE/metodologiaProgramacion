#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** reservarMemoria(int nFil, int nCol){
    int** matriz;
    
    matriz=(int**)malloc(nFil*sizeof(int*));

    if(matriz==NULL){
        printf("\nError en la reserva de memoria");
        exit(-1);
    }

    for(int i = 0; i<nFil; i++){
        matriz[i]=(int*)malloc(nCol*sizeof(int*)); 
        if(matriz[i]==NULL){
            printf("\nError en la reserva de memoria");
            exit(-1);
        }
    }
    return matriz;
}

void rellenarMatriz(int**matriz, int nFil, int nCol){
    time_t t;

    srand((int) time(&t));

    for(int i = 0; i<nFil;i++){
        for(int j=0; j<nCol; j++){
            matriz[i][j]=rand()%20+1;
        }
    }
}

void imprimeMatriz(int **matriz, int nFil, int nCol){
    
    for(int i = 0; i<nFil; i++){
        for(int j=0; i<nCol; j++){
            printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
        }
    }
}