/* Caricato un vettore con valori
random calcolare la media */

#include <stdio.h>
#include "libreria.c"
#define DIM 10

int main(){
    int min=0,max=100;
    int v[DIM]={0};
    VettoreRandom(v, DIM, min, max);
    media(v,DIM);
}

void media(int vet[],int dim){

    int s=0;
    float m;

    for(int i=0; i<dim; i++){
        s+=vet[i];
    }

    m=s/dim;
    printf("La media corrisponde a %.2f. ", m);
}