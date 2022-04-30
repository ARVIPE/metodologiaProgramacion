#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"

void crearFichero(const char* nombre){

    FILE * arch;
    arch=fopen(nombre, "wb");

    if(arch==NULL){
        printf("Error no se pudo abrir el archivo");
        exit(-1);
    }

    fclose(arch);
}

void introducirLibro(const char*nombre){

    FILE * arch;
    arch=fopen(nombre, "ab");
    if(arch==NULL){
        printf("Error no se pudo abrir el archivo");
        exit(-1);
    }

    tlibro libro;

    printf("Introduzca un titulo:\n");
    getchar();
    fgets(libro.titulo, 500, stdin);
    printf("Introduzca el autor:\n");
    fgets(libro.autor, 500, stdin);
    printf("Introduzca el precio:\n");
    scanf("%f", &libro.precio);
    printf("Introduzca las unidades:\n");
    scanf("%i", &libro.unidades);
    fwrite(&libro, sizeof(tlibro), 1, arch);
    fclose(arch);


}

void mostrarLibros(const char*nombre){

    FILE * arch;
    arch=fopen(nombre, "rb");
    if(arch==NULL){
        printf("Error no se pudo abrir el archivo");
        exit(-1);
    }

    tlibro libro;

    fread(&libro, sizeof(tlibro), 1, arch);
    while(!feof(arch)){

        printf("\nTITULO:%s\nAUTOR:%s\nPRECIO:%0.2f\nUNIDADES:%i\n-------------------------------------\n",libro.titulo,libro.autor,libro.precio,libro.unidades);
        fread(&libro, sizeof(tlibro), 1, arch);

    }
    
    fclose(arch);

}
