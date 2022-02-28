#include<stdio.h>
#include<math.h>



void crearVector(double *v, int* tope){

for(int i = 0; i < *tope; i++){
    printf("Introduce el elemento del array en la posicion: %d\n", i+1);
    scanf("%lf", (v+i));
}

}

void mostrarVector(double *v, int* tope){
    for(int i = 0; i < *tope; i++){
        printf("El elemento en la posición %d del array es %4.f\n", i+1, *(v+i));
    }
}

int main(){

int n = 5;
double v[n];

crearVector(v, &n);
mostrarVector(v, &n);

}