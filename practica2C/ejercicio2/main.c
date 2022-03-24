#include<string.h>
#include<stdio.h>
#include"funciones.h"

int main(){

int *vector, longitud, numero, menornumero=0, mayornumero=0, *menornumero, *mayornumero;
printf("Introduzca el tamaño del vector\n");
scanf("%d", &longitud);
vector=(int*)malloc(longitud*sizeof(int));
printf("Introduzca los valores del vector\n");
for(int i = 0; i<longitud; i++){
    scanf("%d", &vector[i]);
}
printf("Introduzca un numero para hacer la división\n");
scanf("%d", &numero);


}