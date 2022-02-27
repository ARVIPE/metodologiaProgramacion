#include <stdio.h>
#include <stdlib.h>

void minimo(int num1, int num2)
{

    if (num1 > num2)
    {
        printf("El número mayor es : %d\n", num1);
    }
    else
    {
        printf("El número mayor es : %d\n", num2);
    }
}

int minimo_referencia(int num1, int num2)
{

    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}

int main(int argc, char *argv[])
{

    int a, b;

    printf("Introduce el primer numero\n");
    scanf("%d", &a);
    printf("Introduce el segundo numero\n");
    scanf("%d", &b);

    minimo(a, b);

    int ret = minimo_referencia(a, b);
    printf("El numero mayor es: %d\n", ret);

    return 0;
}