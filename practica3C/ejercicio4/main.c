#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"

int main(){
    
    int eleccion;
    char nombre[25];

        printf("Introduzca el numero que corresponde a la operación que desea realizar\n");
		printf("Pulse 1 para comprobar la existencia de un determinado libro en el stock. \n");
		printf("Pulse 2 para introducir un nuevo libro en el stock.\n");
		printf("Pulse 3 para contar el número de libros diferentes que hay en el stock.\n");
		printf("Pulse 4 para listar los libros en el stock.\n");
		printf("Pulse 5 para vender n unidades de un libro\n");
		printf("Pulse 6 para borrar aquellos registros con 0 unidades disponibles.\n");
		printf("Pulse 0 para salir\n");

    scanf("%i", &eleccion);

    switch (eleccion)
    {
    case 1:
        printf("Introduzca nombre de la obra\n");
        scanf("%s", nombre);
        if(comprobarExistencia(nombre) == 2){
            printf("Este libro está");
        }else{
            printf("No está");
        }
        break;
    case 2:
        printf("caso 2");
        break;
    
    default:
        printf("Introduzca un numero");
        break;
    }

}