#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funciones.h"

void reservarVectorStruct(struct Ficha_jugador** v, int nJugadores){
    *v=(struct Ficha_jugador*)calloc(nJugadores,sizeof(struct Ficha_jugador));
    if(*v==NULL){
        printf("\nError en la reserva de memoria");
        exit(-1);
    }
}

struct Ficha_jugador rellenarjugador()
{
    struct Ficha_jugador aux;

    printf("Introduzca el nombre del jugador:\n");
    scanf("%s", aux.nombre);

    printf("Introduzca el dorsal:\n");
    scanf("%i", &aux.dorsal);

    printf("Introduce el peso en kilos:\n");
    scanf("%f", &aux.peso);

    printf("Introduzca la estadura");
    scanf("%i", &aux.estatura);

    return aux;

};

void rellenarVectorJugadores(struct Ficha_jugador*v, int nJugadores){
    for(int i = 0; i < nJugadores; i++){
        printf("\n\nRELLENA EL JUGADOR NUMERO %i", i);
        v[i]=rellenarjugador();
    }
}

void imprimirJugadores(struct Ficha_jugador*v, int nJugadores){
    for(int i = 0; i<nJugadores; i++){
        printf("\n\nJugador numero %i\n",i);
        printf("\nNombre: %s\n", v[i].nombre);
        printf("\nDorsal:%i\n",v[i].dorsal);
        printf("\nPeso:%f\n",v[i].peso);
        printf("\nEstatura:%i centimetros\n", v[i].estatura);
    }
}

int borrar_reducirVector_Devolver(struct Ficha_jugador* v, char* cad_a, int nJugadores){
    int aux=0;
    for(int i = 0; i<nJugadores; i++){
        if(strstr(v[i].nombre, cad_a)==NULL){
            strcpy(v[aux].nombre,v[i].nombre);
            v[aux].dorsal=v[i].dorsal;
            v[aux].peso=v[i].peso;
            v[aux].estatura=v[i].estatura;

            aux++;
        }
    }

    v=(struct Ficha_jugador*)realloc(v, nJugadores*sizeof(struct Ficha_jugador));

    if(v==NULL){
        printf("\nError en la reserva de memoria");
        exit(-1);
    }
    return aux;
}