#include<stdio.h>
#include<stdlib.h>
#include"funciones.h"

int main(){
  
    int nJugadores;
    struct Ficha_jugador*v;
    char cad_a[50]="a";

    printf("Introduce el numero de jugadores");
    scanf("%i", &nJugadores);
 
    reservarVectorStruct(&v, nJugadores);
    rellenarVectorJugadores(v, nJugadores);
    imprimirJugadores(v, nJugadores);
    
    nJugadores=borrar_reducirVector_Devolver(v,cad_a,nJugadores);

    printf("\n\nLISTA DE JUGADORES QUE NO CONTIENEN UNA 'A' EN SU NOMBRE\n");
    imprimirJugadores(v,nJugadores);

    free(v);
    return 0;
}