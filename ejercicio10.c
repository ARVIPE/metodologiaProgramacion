#include<string.h>

void leeVector(double *v, int *tope){
    for(int i = 0; i<tope; i++){
        printf("Introce el elemento %d del vector:",i+1);
        scanf("%lf",(v+i));
    }
}

void escribeVector(double *v, int * tope){
    for(int = 0; i<tope; i++){
        printf("%d",*(v+i));
    }
}


int main(){
    int n=5, opc=0;
    double test[n];



    switch (opc!=4)
    {
    case 1:
    leeVector(test,&n);
        break;

    case 2:
    escribeVector(test,&n);
    break;
    
    default:
        printf("\nIntroduzca una opcion\n");
        break;
    }
}