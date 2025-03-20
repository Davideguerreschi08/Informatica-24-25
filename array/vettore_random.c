/* Caricato un vettore con valori
random calcolare la media */

#include <stdio.h>
#include "libreria.c"
#define DIM 10

int main(){
    int min=0,max=100;
    int v[DIM]={0};
    stampaVettore(v,DIM,' ');
    VettoreRandom(v, DIM, min, max);
    media(v,DIM);
}