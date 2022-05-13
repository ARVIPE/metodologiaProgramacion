#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cabecera.h"



void crear(){
    FILE *arch;
    arch=fopen("productos.dat", "wb");
    if(arch==NULL){
        exit(-1);
    }
    fclose(arch);
}

void cargar(){
    FILE *arch;
    arch=fopen("productos.dat", "ab");
    if(arch==NULL){
        exit(-1);
    }
    tpproducto producto;
    printf("Ingrese el codigo del producto: \n");
    scanf("%i", &producto.codigo);
    printf("Ingrese el nombre del producto: \n");
    getchar();
    fgets(producto.nombre, 500, stdin);
    printf("Introduzca el precio: \n");
    scanf("%f", &producto.precio);
    fwrite(&producto, sizeof(tpproducto), 1, arch);
    fclose(arch);

}

void listado(){
    FILE *arch;
    arch=fopen("productos.dat", "rb");
    if(arch==NULL){
        exit(-1);
    }
    tpproducto producto;
    fread(&producto, sizeof(tpproducto), 1, arch);
    while(!feof(arch)){
        printf("%i %s %0.2f\n", producto.codigo, producto.nombre, producto.precio);
        fread(&producto, sizeof(tpproducto), 1, arch);
    }
    fclose(arch);
}

void buscarProducto(int codigo){
    FILE *arch;
    arch=fopen("productos.dat", "rb");
    if(arch==NULL){
        exit(-1);
    }
    tpproducto producto;
    fread(&producto, sizeof(tpproducto), 1, arch);
     while(!feof(arch)){
        if(producto.codigo == codigo){
            printf("El producto con el identificador %i es un %s cuyo precio es de %0.2f\n", producto.codigo, producto.nombre, producto.precio);
        }else{
            printf("No hay ningun producto con este identificador");
        }
        fread(&producto, sizeof(tpproducto), 1, arch);
    }
}

void modificarPrecio(int codigo){
    FILE *arch;
    arch=fopen("productos.dat", "r+b");
    if(arch==NULL){
        exit(-1);
    }
    tpproducto producto;
    fread(&producto, sizeof(tpproducto), 1, arch);
     while(!feof(arch)){
        if(producto.codigo == codigo){
            printf("El producto con el identificador %i es un %s cuyo precio es de %0.2f\n", producto.codigo, producto.nombre, producto.precio);
            printf("Ingrese nuevo precio: ");
            scanf("%f", &producto.precio);
            int pos=ftell(arch)-sizeof(tpproducto);
            fseek(arch,pos,SEEK_SET);
            fwrite(&producto, sizeof(tpproducto), 1, arch);
            printf("Se modificó el precio para dicho producto");

        }
        fread(&producto, sizeof(tpproducto), 1, arch);
    }
}