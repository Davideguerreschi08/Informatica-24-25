/*dati 2 vettori V1 V2 eseguire lo scambio dei valori*/
#include <stdio.h>
#include "libArray.h"
#include "libArray.c"

#define DIM 15

int main(){
    int v1[DIM], v2[DIM], t;
    riempiVettoreCasuale ( v1, DIM, 1, 70);
    riempiVettoreCasuale ( v2, DIM, 8, 80);
    stampaVettore(v1, DIM, '-');
    printf("\n");
    stampaVettore(v2, DIM, '-');

    for( int i=0; i<DIM; i++){
        t=v1[i];
        v1[i]=v2[i];
        v2[i]=t;
    }
   printf("scambio:\n ");
   stampaVettore(v1, DIM, '-');
   printf("\n");
   stampaVettore(v1, DIM, '-');  


}