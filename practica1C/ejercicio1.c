/* Mostrar los tamaños de tipos básicos son sizeof
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    printf ("El Tipo <int> tiene un tamaño de %zd bytes\n", sizeof (int));
    printf ("El Tipo <int*> tiene un tamaño de %zd bytes\n", sizeof (int *));
    printf ("El Tipo <int**> tiene un tamaño de %zd bytes\n", sizeof (int **));
    printf ("El Tipo <double> tiene un tamaño de %zd bytes\n", sizeof (double));
    printf ("El Tipo <double*> tiene un tamaño de %zd bytes\n", sizeof (double *));
    printf ("El Tipo <double**> tiene un tamaño de %zd bytes\n", sizeof (double **));
    printf ("El Tipo <char> tiene un tamaño de %zd bytes\n", sizeof (char));
    printf ("El Tipo <char*> tiene un tamaño de %zd bytes\n", sizeof (char *));
    printf ("El Tipo <char**> tiene un tamaño de %zd bytes\n", sizeof (char **));


    exit (EXIT_SUCCESS);
}