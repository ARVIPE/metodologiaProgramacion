#ifndef CABECERA_H
#define CABECERA_H

struct libro{
    char titulo[25];
    char autor[25];
    float precio;
    float stock;
};

int comprobarExistencia(char* nombre);


#endif