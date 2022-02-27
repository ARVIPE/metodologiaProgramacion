#include <stdio.h>
#include <stdlib.h>

void leeVector(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Introduzca el elemento de la posición %d\n", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrarVector(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("El vector creado en la posicion %d es: %d\n", i + 1, v[i]);
    }
}

void estadisticasVector(int *v, int n)
{
    float suma, media = 0;
    for (int i = 0; i < n; i++)
    {
        suma += v[i];
    }
    media = suma / n;
    printf("La media del vector pasado es : %f", media);
}

int main()
{
    int n;
    printf("Introduzca la longitud del vector\n");
    scanf("%d", &n);
    int v[n];
    leeVector(v, n);
    mostrarVector(v, n);
    estadisticasVector(v, n);
}