/*
sviluppiamo le funzioni*/
#include <stdio.h>
#include "libreria.h"//prototipi delle funzioni
#include <time.h>
#include <stdlib.h>

void richiediValori(int vettore[], int dim){
    int n=0, i=0;

    while(i<dim){
        printf("Inserisci un valore: ");
        scanf("%d", &n);
        if(n%2==0){
            vettore[i]=n;
            i++;
        }
    }
}

void stampaVettore(int vettore[],int dim,char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vettore[i], sep);
    }
}

void VettoreRandom(int vettore[],int dim, int minimo, int massimo){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vettore[i]=rand()%(massimo-minimo+1)+minimo;
    }
}
void media(int vettore[],int dim){

    int somma=0;
    float media=0;

    for(int i=0; i<dim; i++){
        somma+=vettore[i];
    }

    media=somma/dim;
    printf("La media corrisponde a %.2f. ", media);
}