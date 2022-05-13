#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include "funciones.h"


int actores(struct actor * v, const char* nombre){

    FILE * fichero;
    fichero=fopen(nombre, "rb");
    if(fichero==NULL){
        printf("ERROR: no se pudo abrir el fichero");
        exit(-1);
    }

    int i = 0, contador = 0;
    do{
        if(v[i].nombre != NULL){
            contador++;
        }const char* nombre;
        i++;
    }while(!feof(fichero));


    return i;
}