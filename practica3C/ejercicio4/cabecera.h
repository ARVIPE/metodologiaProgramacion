#ifndef CABECERA_H
#define CABECERA_H

struct libro{
    char titulo[50];
    char autor[50];
    float precio;
    float stock;
};

int comprobarExistencia(char* nombre);
void agregarLibro(char* nombre, char* autor,float precio, float stock);
int numLibrosDiferentesEnStock();
void venderLibros(char* nombre, float cantidad);

#endif