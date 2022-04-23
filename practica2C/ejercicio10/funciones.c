#include <stdio.h>
#include <string.h>
#include "cabecera.h"

int contadorCaracteres(cad1, cad2, cont){
    if(strlen(cad1) == 0){
        return cont;
    }else{
        if(cad1==cad2){
            cont++;
        }
        contadorCaracteres(cad1++, cad2, cont);
    }
}