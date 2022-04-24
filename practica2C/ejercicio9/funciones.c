#include<stdio.h>
#include "cabeceras.h"

void division(int * dividendo, int divisor, int * cociente, int * resto){
    if(*dividendo < divisor){
        *resto = *dividendo;
    }else{
        *cociente*=1;
        *dividendo-=divisor;
        division(dividendo, divisor, cociente, resto);
    }
}
