#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

int main(){
    
    char fichero[64];

    printf("Introduce el fichero que quieres abrir: ");
    scanf("%s", fichero);

    copiaficheroMAYUS(fichero);

    return 0;

}