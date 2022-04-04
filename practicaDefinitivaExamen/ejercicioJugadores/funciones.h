#ifndef FUNCIONES_H
#define FUNCIONES_H

struct Ficha_jugador{
    char nombre[50];
    int dorsal;
    float peso;
    int estatura;
};


void reservarVectorJugadores(struct Ficha_jugador** v, int nJugadores);
struct Ficha_jugador rellenarJugadores();
void rellenarVectorJugadores(struct Ficha_jugador*, int nJugadores);
int borrarReducirVectores(struct Ficha_jugador*v, char* cad_a, int nJugadores);

#endif