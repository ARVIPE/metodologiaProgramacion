#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"


int comprobarExistencia(char* nombre){

    FILE *f;

    f=fopen("Almacen_Libreria.txt", "r");

    if(f==NULL){
        printf("ERROR: no se encontró fichero");
        exit(-1);
    }
	
	struct libro l;
	char aux[500];
  		do{
			if (strcmp(aux,nombre)==0){
				fclose(f);
				return 2;
			}
			int i = 0;
			do{
				i++;
			} while (fgets(aux,256,f)!=NULL && i<2);
		}while(fgets(aux,500,f)!=NULL);
		fclose(f);
		return 1;	

}

void agregarLibro(char* nombre, char* autor,float precio, float stock){

	FILE *fichero;

	fichero=fopen("Almacen_Libreria.txt", "a");

	if(fichero==NULL){
		printf("ERROR: no se encontró el fichero");
		exit(-1);
	}

	struct libro l;
	fprintf(fichero, "\n%s", nombre);
	fputs(autor, fichero);
	fprintf(fichero, "%f %f", precio, stock);


}

int numLibrosDiferentesEnStock(){

	FILE *fichero;

	fichero=fopen("Almacen_Libreria.txt", "r");

	if(fichero==NULL){
		printf("ERROR: no se encontró el fichero");
		exit(-1);
	}

	int contador=0;
	char aux[500];
	
	if(fgets(aux, 500, fichero)!=NULL || feof(fichero)){
		do{
			contador++;
			int i = 0;
			do{
				i++;
			} while (fgets(aux,500,fichero)!=NULL && i<2);
		}while(fgets(aux,500,fichero)!=NULL);
		fclose(fichero);

		return contador;
	
	}
  	

}

// void venderLibros(char* nombre, float cantidad){

// 	FILE *fichero;

// 	fichero=fopen("Almacen_Libreria.txt", "r");

// 	if(fichero==NULL){
// 		printf("ERROR: no se encontró el fichero");
// 		exit(-1);
// 	}

// 	char aux[500];
//   		do{
// 			if (strcmp(aux,nombre)==0){
// 				fscanf(fichero, "%f %d%c", )





// 			}
// 		}while(fgets(aux,500,fichero)!=NULL);
// 		fclose(fichero);

// }