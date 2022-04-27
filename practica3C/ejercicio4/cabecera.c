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


    char aux[256];
    if (fgets(aux,256,nombre)!=NULL || !feof(fichero))
	{
		do
		{
			if (strcmp(aux,nombre)==0)
			{
				fclose(fichero);
				return 2;
			}
			int i=0;
			do
			{
				i++;
			} while (fgets(aux,256,fichero)!=NULL && i<2);
		}while(fgets(aux,256,fichero)!=NULL);
		fclose(fichero);
		return 1;	
	}



}