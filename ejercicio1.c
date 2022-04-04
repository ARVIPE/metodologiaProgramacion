#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>


int main(){

float ** tabla;
int nFil=2, nCol=3;

tabla=(float**)malloc(nFil*sizeof(float*));
for(int i = 0; i <nFil; i++){
    tabla[i]=(float*)malloc(nCol*sizeof(float));
}

srand(time(NULL));


for(int i = 0; i<nFil; i++){
    for(int j = 0; j<nCol; j++){
        tabla[i][j]=rand()%20+1;
    }
}

for(int i = 0; i<nFil; i++){
    printf("|");
    for(int j=0; j<nCol; j++){
        printf("%f|",(tabla[i][j]));
    }
    printf("|\n");
}


}
