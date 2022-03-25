#ifndef FUNCIONES_H
#define FUNCIONES_H

struct Ficha_jugador{
    char nombre[50];
    int dorsal;
    float peso;
    int estatura;
};

void reservarVectorStruct(struct Ficha_jugador** v, int nJugadores);
struct Ficha_jugador rellenarjugador();
void rellenarVectorJugadores(struct Ficha_jugador* v, int nJugadores);
void imprimirJugadores(struct Ficha_jugador*v, int nJugadores);
int borrar_reducirVector_Devolver(struct Ficha_jugador* v, char* cad_a, int nJugadores);

#endif