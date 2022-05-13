#ifndef FUNCIONES_H
#define FUNCIONES_H

struct actor{
    char nombre[50];
    float cache;
    int humano;
    char color[15];
};

int actores(struct actor * v, const char* nombre);

#endif


