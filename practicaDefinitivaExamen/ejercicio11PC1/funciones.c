#include <stdio.h>
#include <string.h>
#include "funciones.h"
#define MAX 30

int es_prefijo(char *cadena, char *prefijo){

if(strlen(cadena)<strlen(prefijo)){
    return 0;
}

for(int i = 0; i < strlen(prefijo); i++){
    if(cadena[i]!=prefijo[i]){
        return 0;
    }
   
}

return 1;

}

int es_sufijo(char *cadena, char *sufijo){

    int dif = 0;
    
    if(strlen(cadena)<strlen(sufijo)){
        return 0;
    }

    dif=strlen(cadena)-strlen(sufijo);

    for(int i = 0; i<strlen(sufijo); i++){
        if(cadena[dif+i]!=sufijo[i]){
            return 0;
        }
        
    }
    return 1;


}