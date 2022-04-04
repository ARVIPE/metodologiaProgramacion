#ifndef FUNCIONES_H
#define FUNCIONES_H

void imprimir_vector(int *v, int nEle);
void reservarVector(int **v, int nEle);
void rellenaVector(int *v, int nEle);
void longuitud_vectores(int *v, int nEle, int num, int *nEle_mayor, int * nEle_menor);
void mayor_menor(int * v, int *v_mayor, int * v_menor, int *nEle_mayor, int * nEle_menor, int nEle, int num);

#endif