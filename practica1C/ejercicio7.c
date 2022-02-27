#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    float suma, media, sumavar, varianza, desv = 0;
    for (int i = 0; i < n; i++)
    {
        suma += v[i];
        sumavar += pow(v[i], 2);
    }
    media = suma / n;
    varianza = (sumavar / n) - pow(media, 2);
    desv = sqrt(varianza);
    printf("La media del vector pasado es : %.2f, la varianza del vector es: %.2f, la desviación típica es: %.2f\n", media, varianza, desv);
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