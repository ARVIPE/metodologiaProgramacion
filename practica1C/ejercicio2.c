//Ejercio para empezar a comprender los punteros

#include<stdio.h>
#include <inttypes.h>

void prueba(int* px){

int y = *px; //Valor que le corresponde a esa direccion
y = 3;
*px=y;

}

int main(){

int x = 10; //Variable que le asignamos un valor
prueba(&x);//Direccion de la variable

int* px = &x;


printf("%" PRIuPTR, (uintptr_t)&x); //Imprimir direccion de la variable en decimal
printf("\n");
printf("%p\n", &x); //Imprimir direccion de la variable en hexadecimal
printf("%p\n", px); //Imprimir direccion de la variable en hexadecimal
printf("%d\n", *px); //Imprimir el valor de la variable



}