/* Caricato un vettore con valori
random calcolare la media */

#include <stdio.h>
#include "libreria.c"
#define DIM 10

int main(){
    float m;
    int min=0,max=100;
    int v[DIM]={0};
    VettoreRandom(v, DIM, min, max);
    m=media(m);
    printf("La media corrisponde a %.2f. ", m);
}

float media(int v[],int dim){

    int s=0;
    float m;

    for(int i=0; i<dim; i++){
        s+=v[i];
    }

    m=s/dim;
    return m;
}