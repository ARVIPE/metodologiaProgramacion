#ifndef FUNCIONES_H
#define FUNCIONES_H

struct Ficha_jugador{
    char nombre[50];
    int dorsal;
    float peso;
    int estatura;
};

void reservarVectorStruct(struct Ficha_jugador**v, int nJugadores);

#endif