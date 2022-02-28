#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellenarVectorAleatorio(int *v, int *r)
{
    srand(time(NULL));
    printf("Introduce el rango: ");
    scanf("%d", r);
    for (int i = 0; i < 10; i++)
    {
        v[i] = rand() % (*(r) + 1);
    }
}

void imprimirVector(int *v)
{
    printf("El vector es: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", *(v + i));
    }
    printf("\n");
}

void crearIndiceImpares(int *v, int *v2[])
{
    int j = 0;
    for (int i = 0; i < 10; i += 2)
    {
        v2[j] = (v + i);
        j++;
    }
}

void crearIndicesDivisibles(int *v, int *v3[])
{
    int j = 0;
    for (int i = 0; i < 10; i += 3)
    {
        v3[j] = (v + i);
        j++;
    }
}

void imprimeIndice(int **v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%p\n", *(v + i));
    }
}

int main()
{

    int v[10], *v2[5], *v3[4], rango;

    rellenarVectorAleatorio(v, &rango);
    imprimirVector(v);
    crearIndiceImpares(v, v2);
    printf("Direcciones de los elementos impares: \n");
    imprimeIndice(v2, 5);
    crearIndicesDivisibles(v, v3);
    printf("Direcciones de los elementos divisibles entre 3: \n");
    imprimeIndice(v3, 4);
}