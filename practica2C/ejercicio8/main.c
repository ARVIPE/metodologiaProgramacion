#include<string.h>
#include<stdio.h>

int maximo_comun_divisor(int a, int b){
    int temporal;
    while (b != 0)
    {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int maximo_comun_divisor_recursivo(int a, int b){
    if(b==0) return a;
    return maximo_comun_divisor_recursivo(b, a % b);
}

int main(){
    printf("MCD de 50 y 120 (recursivo): %d\n", maximo_comun_divisor_recursivo(50,120));
}

