#ifndef CABECERA_H
#define CABECERA_H

typedef struct{
    char titulo[100];
    char autor[50];
    float precio;
    int unidades;
} tlibro;


void crearFichero(const char* nombre);
void introducirLibro(const char*nombre);
void mostrarLibros(const char*nombre);


#endif