#include <stdio.h>
#include <string.h>
#include "cabecera.h"

int contadorCaracteres(char * cad1, char *cad2, int size){
    if(size==0){
        if(cad1[size]==cad2[0]){
            return 1;
        }else{
            return 0;
        }
    }
    if(cad1[size]==cad2[0]){
        return 1+contadorCaracteres(cad1,cad2,size-1);
    
    }else{
        return 0+contadorCaracteres(cad1,cad2,size-1);
    }
  
}