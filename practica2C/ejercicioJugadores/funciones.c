#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funciones.h"

void reservarVectorStruct(struct ficha_jugador**v, int nJugadores){
    *v=(struct Ficha_jugador*)calloc(nJugadores, sizeof(struct Ficha_jugador));
    if(*v==NULL){
        printf("\nError de reserva en la memoria");
        exit(-1);
    }
}

struct Ficha_jugador rellenarjugador()
{
    struct Ficha_jugador aux;

    printf("Introduzca el nombre del jugador:\n");
    scanf("%s", aux.nombre);

    printf("Introduzca el dorsal:\n");
    scanf("%d", &aux.dorsal);

    printf("Introduce el peso en kilos:\n");
    scanf("%d", &aux.peso)




};
