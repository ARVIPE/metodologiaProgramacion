#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void cambiar_mayus(char* linea_copiada){
    for(int i=0; linea_copiada[i]; i++){
        linea_copiada[i]=toupper(linea_copiada[i]);
    }
}

void copiaficheroMAYUS(){
    
    char linea[264];
    FILE *fOrigen;

    fOrigen=fopen("arturo", "r");
    if(fOrigen==NULL){
        printf("\nError al abrir el fichero <%s>", "arturo");
        exit(-1);
    }

    FILE* fDestino;

    fDestino=fopen("mayusculas-fichero", "w");
    if(fDestino==NULL){
        printf("\nError, no se pudo crear el fichero <%s>", "arturo.txt");
        exit(-1);
    }
    while(fgets(linea, 264, fOrigen)!=NULL){
        cambiar_mayus(linea);
        fprintf(fDestino, "%s", linea);
    }
    fclose(fOrigen);
    fclose(fDestino);

}
