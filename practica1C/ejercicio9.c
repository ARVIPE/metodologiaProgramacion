#include <stdio.h>
#include <math.h>

struct monomio
{
    int coef;
    int grado;
};

void leerMonomio(struct monomio *m)
{
    printf("Introduzca el coeficiente del monomio: ");
    scanf("%d", &(*m).coef);
    printf("Introduzca el grado del monomio: ");
    scanf("%d", &m->grado);
}

void imprimirMonomio(struct monomio m)
{
    printf("%dx^%d", m.coef, m.grado);
}

int main()
{
    int n = 3;
    float x, res = 0;
    struct monomio pol[n];

    printf("NUMERO DE MONOMIOS --> %d\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("\nMONOMIO %d\n\n", i + 1);
        leerMonomio(&(pol[i]));
    }

    printf("\nPOLINOMIO:\t");

    for (int i = 0; i < n; i++)
    {
        imprimirMonomio(pol[i]);
        if (i < n - 1)
            printf("+");
    }

    printf("\nIntroduzca un valor para x: ");
    scanf("%f", &x);

    for (int i = 0; i < n; i++)
    {
        res += pol[i].coef * pow(x, pol[i].grado);
    }
    printf("El polinomio en el punto %.2f vale %.2f\n", x, res);

    return 0;
}
