#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"

int main(int argc, char const *argv[]){

int opcion;


do{
    printf("1: Crear fichero binario\n");
    printf("2: Introducir un nuevo libro\n");
    printf("3: Mostrar todos los libros\n");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        crearFichero(argv[1]);
        break;
    case 2:
        introducirLibro(argv[1]);
        break;
    case 3:
        mostrarLibros(argv[1]);
        break;
    default:
        break;
    }




}while(opcion!=6);
}