#include<string.h>
#include<stdio.h>
#define TOPE 30


int main(){

int* ptr[10];
int vector[10];
int i;

for(i=0; i<10; i++){
    vector[i]=i;
    ptr[i]=&vector[i];
    *(ptr[i])=vector[i];
    printf("\n(ptr[%d]): %d", i, *(ptr[i]));
}

}