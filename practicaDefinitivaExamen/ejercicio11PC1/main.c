#include <stdio.h>
#include <string.h>
#include "funciones.h"
#define MAX 30



int main(){

char cad1[50], cad2[50];

printf("Introduzca una cadena\n");
fgets(cad1, MAX, stdin);
cad1[strlen(cad1)-1]='\0'; //para eliminar el espacio del intro

printf("Introduzca la segunda cadena\n");
fgets(cad2, MAX, stdin);
cad2[(strlen(cad2)-1)]='\0';

if(es_prefijo(cad1, cad2)==1){
    printf("La cadena 2 es prefijo de la cadena 1 \n");
}else{
    printf("La cadena 2 no es prefijo de la cadena 1 \n");
}


if(es_sufijo(cad1, cad2)==1){
    printf("La cadena 2 es sufijo de la cadena 1 \n");
}else{
    printf("La cadena 2 no es sufijo de la cadena 1 \n");
}




}