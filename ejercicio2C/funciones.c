#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void reservarVector(int **v, int nEle){
    if((*v = (int*)calloc(nEle, sizeof(int)))==NULL){
        printf("\nError en la reserva de memoria");
        exit(-1);
    }
}

void rellenaVector(int *v, int nEle){
    time_t t;
    int i;

    srand((int)time(&t));

    for(i=0; i<nEle; i++){
        v[i]=rand()%50+1;
    }
}

void imprimir_vector(int *v, int nEle){
    int i;

    for(i=0; i<nEle; i++){
        printf("v[%i]=%i\n", i, v[i]);
    }
}

void longitud_vectores(int *v, int nEle, int num, int * nEle_mayor, int *nEle_menor){
    int i;

    for(int i=0; i<nEle; i++){
        if(v[i]>=num){
            *nEle_mayor=*nEle_mayor+1;
        }else{
            *nEle_menor=*nEle_menor+1;
        }
    }
}

void mayor_menor(int *v, int *v_mayor, int *v_menor, int *nEle_mayor, int *nEle_menor, int nEle, int num){
    int i;
    *nEle_mayor=0;
    *nEle_menor=0;

    for(i=0; i<nEle;i++){
        if(v[i]>=num){
            v_mayor[*nEle_mayor]=v[i];
            *nEle_mayor=*nEle_mayor+1;
        }else{
            v_menor[*nEle_menor]=v[i];
            *nEle_menor=*nEle_menor+1;
        }
    }
}