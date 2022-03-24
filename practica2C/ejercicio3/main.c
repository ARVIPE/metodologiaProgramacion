#include <stdio.h>
#include <stdlib.h>

float** reservarMatrizDinamicaPorFilas(int nFil, int nCol){
    float** Matriz;
    int i, j, error=0;
    Matriz=(float**)malloc(nFil*sizeof(float*));
    for(int i = 0; i < nFil; i++){
        Matriz[i]=(float*)malloc(nCol*sizeof(float));
    }
    return (Matriz);
}

void liberarMatrizDinamicaPorFilas(float** Matriz, int nFil){
    for(int i = 0; i < nFil; i++){
        free(Matriz[i]);
    }
    free(Matriz);
}

int main(){
    reservarMatrizDinamicaPorFIlas(3,3);
}