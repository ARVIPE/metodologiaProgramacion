#ifndef CABECERA_H
#define CABECERA_H

typedef struct{
    int codigo;
    char nombre[200];
    float precio;
} tpproducto;

void continuar();
void crear();
void cargar();
void listado();
void buscarProducto(int codigo);
void modificarPrecio(int codigo);

#endif