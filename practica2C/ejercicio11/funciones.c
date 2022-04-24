#include "cabecera.h"
#include<stdio.h>

int sumarecursiva(int num){

    if(num<10){
        return num;
    }else{
        return num%10+sumarecursiva(num/10);
    }
    
}