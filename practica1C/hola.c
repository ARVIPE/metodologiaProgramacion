//Ejercio para empezar a comprender los punteros
#include<stdio.h>
#include <inttypes.h>

void cambiargenero(int* px){

int y = 3;

*px = y;

}

int main(){

int x = 6;

cambiargenero(&x);

printf("%d\n", x);



}