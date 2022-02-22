#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

float a = 0.001;
float b = 0.003;
float c, *pa, *pb;
pa = &a;
*pa = 2*a;
pb = &b;
c = 3 * (*pb + *pa);

printf("Valor\n", sizeof (&a));

}