#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"


int comprobarExistencia(char* nombre){

    FILE *fichero;

    fichero=fopen("Almacen_Libreria.txt", "r");

    if(fichero==NULL){
        printf("ERROR: no se encontró fichero");
        exit(-1);
    }
	

	struct libro l;
    if (fgets(l.titulo,256,fichero)){
	//	l.titulo[strlen(l.titulo)-1]='\0';
	//	fgets(l.autor,256,fichero);
	//	fscanf(fichero, "%f %f", &l.precio, &l.stock);
		if (strcmp(l.titulo,nombre)==0)
			{
				fclose(fichero);
				return 2;
			}
		return 1;	
	}

	fclose(fichero);



}