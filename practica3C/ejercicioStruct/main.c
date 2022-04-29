#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"

int main(){

    int opcion;
    int codigo;
    do{
        printf("\n1 - Crear un archivo binario llamado \"productos.dat\"\n");
        printf("2 - Carga de registros de tipo tproducto\n");
        printf("3 - Listado completo de productos.\n");
        printf("4 - Consulta de un producto por su codigo. \n");
        printf("5 - Modificacion del precio de un producto. \n");
        printf("Ingrese su opcion: ");
        scanf("%i", &opcion);
        switch (opcion)
        {
        case 1: crear();
            break;
        case 2: cargar();
            break;
        case 3: listado();
            break;
        case 4:
            printf("Introduzca un codigo de producto:\n");
            scanf("%i", &codigo);
            buscarProducto(codigo);
            break;
        case 5:
            printf("Introduzca un codigo de producto:\n");
            scanf("%i", &codigo);
            modificarPrecio(codigo);
            break;
        default:
            break;
        }



    }while(opcion!=6);



}