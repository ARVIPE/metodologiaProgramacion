#ifndef FUNCIONES_H
#define FUNCIONES_H

int** reservarMemoria(int nFil,int nCol);
void rellenarMatriz(int **matriz, int nFil, int nCol);
void imprimeMatriz(int **matriz, int nFil, int nCol);
int * minCol (int **matriz, int nFil, int nCol);
void liberarMemoria(int **matriz, int nFil);

#endif