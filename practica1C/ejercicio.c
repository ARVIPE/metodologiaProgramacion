#include <stdio.h>
#include <stdlib.h>

int main (){

    int a, *b, **c;
    double d, *e, **f;
    char g, *h, **i;

    printf("El tamaño de la variable int a %ld bytes\n", sizeof(a));
    printf("El tamaño de la variable int* a %ld bytes\n", sizeof(b));
    printf("El tamaño de la variable int** a %ld bytes\n", sizeof(c));

    printf("El tamaño de la variable double a %ld bytes\n", sizeof(d));
    printf("El tamaño de la variable double* a %ld bytes\n", sizeof(e));
    printf("El tamaño de la variable double** a %ld bytes\n", sizeof(f));

    printf("El tamaño de la variable char a %ld bytes\n", sizeof(g));
    printf("El tamaño de la variable char* a %ld bytes\n", sizeof(h));
    printf("El tamaño de la variable char** a %ld bytes\n", sizeof(i));


    return 0;


}