#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include"cabecera.h"

int generar_num_aleatorios(int superior, int inferior){
    return (rand()%(superior-inferior+1)+(inferior));
}

void crearfichero(char* fichero, int nEle, int superior, int inferior){
    FILE* f;
    
    time_t t;
    srand((int)time(&t));

    f=fopen(fichero, "w");
    if(f==NULL){
        printf("\nError, no se pudo crear el fichero <%s>",fichero);
        exit(-1);
    }

    for(int i = 0; i<nEle; i++){
        fprintf(f, "%i\n", generar_num_aleatorios(superior, inferior));
    }

    fclose(f);
}