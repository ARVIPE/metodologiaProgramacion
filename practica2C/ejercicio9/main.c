#include<string.h>
#include<stdio.h>
#include "cabeceras.h"

int main(){

  int dividendo, aux_dividendo;
  int divisor;
  int cociente = 0;
  int resto;

  printf("Introduce el dividendo");
  scanf("%i", &dividendo);

  aux_dividendo=dividendo;

  printf("Introduce el divisor: ");
  scanf("%i", &divisor);

  if(divisor > dividendo){
    resto = dividendo;
  }else{
    division(&dividendo, divisor, &cociente, &resto);
  }

  printf("%d/%d=%d y resto %d\n.", aux_dividendo, divisor, cociente, resto);


}
