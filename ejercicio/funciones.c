#include<string.h>

void reservarVectorDinamico(struct Ficha_jugador **v ,int nJugadores){
    *v=(struct Ficha_jugador*)calloc(nJugadores,sizeof(struct Ficha_jugador));
    if(*v==NULL){
        printf("\nError en la reserva de memoria");
        exit(-1);
    }
}