#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"

int cuentaNumeros(char const *nombre)
{
	FILE *f;
	f = fopen(nombre, "r");
	char aux[256];
	int contador=0;
	if (fgets(aux,256,f)!=NULL || !feof(f))
	{
		do
		{
			contador++;
		}while(fgets(aux,256,f)!=NULL);
		fclose(f);
		return contador;	
	}
}


float mediaFichero(char const *nombre){

	FILE *f;
	if((f= fopen(nombre, "r"))== NULL)
	{
		printf("Error al abrir el archivo.\n");
		return -1;
	}
	fclose(f);
	int aux, naux=0;
	float media=0, n=cuentaNumeros(nombre);
	f= fopen(nombre, "r");
	for (int i = 0; i < n; ++i)
	{
				fscanf(f, "%d", &aux);
				if(aux%2==0)
				{	
					media=media+aux;
					naux++;
				}
	}
	fclose(f);
	return (media/naux);



}







