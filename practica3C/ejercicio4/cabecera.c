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
		if (strcmp(l.titulo,nombre)==0)
			{
				fclose(fichero);
				return 2;
			}
		return 1;	
	}

	fclose(fichero);


}
void mostrarfichero(){
	FILE* fich=fopen("Almacen_Libreria.txt","r");
	if(fich==NULL){
        printf("ERROR: no se encontró fichero");
        exit(-1);
    }
	struct libro l;
	while (fgets(l.titulo,25,fich))
	{
		l.autor[strlen(l.titulo)-1]='\0';
		fgets(l.autor,25,fich);
		l.autor[strlen(l.autor)-1]='\0';
		fscanf(fich,"%f %f\n",&l.precio,&l.stock);
		printf("%s %s %f %f\n",l.titulo,l.autor,l.precio,l.stock);


	}
	fclose(fich);

}