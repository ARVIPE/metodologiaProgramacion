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

    srand (time(NULL));

    for(int i = 0; i<nFil;i++){
        for(int j=0; j<nCol; j++){
            matriz[i][j]=rand()%20+1;
        }
    }
}

void imprimeMatriz(int **matriz, int nFil, int nCol){
for(int i = 0; i<nFil; i++){
    printf("|");
    for(int j=0; j<nCol; j++){
        printf("%d|", matriz[i][j]); 
    }
    printf("|\n");
}
}

int * minCol (int **matriz, int nFil, int nCol){
	int *min;
	min = (int *) malloc (nCol*sizeof(int));

    for(int i = 0; i < nCol; i++){
        min[i]=matriz[0][i];
        for(int j = 0; j<nFil; j++){
            if(matriz[j][i]<min[i]){
                min[i]=matriz[j][i];
            }
        }
    }
return min;

}

void liberarMemoria(int **matriz, int nFil){
    for(int i = 0; i <nFil; i++){
        free(matriz[i]);
    }
    free(matriz);
}