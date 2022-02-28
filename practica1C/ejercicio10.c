#include <stdio.h>
#include <math.h>

void leeVector(double *v, int *tope)
{
    printf("\n");
    for (int i = 0; i < *tope; i++)
    {
        printf("Introduce el elemento %d del vector: ", i + 1);
        scanf("%lf", (v + i));
    }
}

void escribeVector(double *v, int *tope)
{
    printf("\n");
    for (int i = 0; i < *tope; i++)
    {
        printf("Elemento %d:%.4f\n", i + 1, *(v + i));
    }
}

double sumaPositivos(double *v, int *tope)
{
    double suma = 0;
    for (int i = 0; i < *tope; i++)
    {
        if (*(v + i) > 0)
        {
            suma += *(v + i);
        }
    }
    return suma;
}

int main()
{
    int n = 5, opc = 0;
    double test[n];
    while (opc != 4)
    {
        printf("\nPulse para elegir una opcion: \n");
        printf("1. Introduce datos del vector\n");
        printf("2. Mostrar datos del vector\n");
        printf("3. Sumar los elementos mayores que 0\n");
        printf("4. Salir\nOPCION: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            leeVector(test, &n);
            break;
        case 2:
            escribeVector(test, &n);
            break;
        case 3:
            printf("\nLa suma de los positivos es: %.4f\n", sumaPositivos(test, &n));
            break;
        case 4:
            printf("\nHasta luego\n");
            break;
        default:
            printf("\nIntroduzca una opcion correcta\n");
        }
    }
}