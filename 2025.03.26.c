/*riempi vettore ordinato
ricerca sequenziale
ricerca dicotomica/binaria*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libArray.h"
#include "libArray.c"
#define DIM 100000
int main(){
    int num=0, vett[DIM], pos=0;
    double start, end;
    double elapsed_time;
    riempiVettoreOrdinatoCasuale(vett, DIM, 0, 100);
    //stampaVettore(vett, DIM, '\t');
    start = (double)clock();
    int trovato = ricercaBinaria(vett, DIM, 0, DIM-1, 101);
    end = (double)clock();
    elapsed_time = ((double)(end - start) );

    printf("Tempo di esecuzione: %.2f ms\n", elapsed_time);
    if(trovato == -1){
        printf("\nl'elemento cercato non esiste nel vettore\n");
    } else {
        printf("\nl'elemento trovato è in posizione %d: %d\n", trovato, vett[trovato]);
    }
    
    start = (double)clock();
    trovato = ricercaSequenziale(vett, DIM, 101);
    end = (double)clock();
    elapsed_time = ((double)(end - start) );
    printf("Tempo di esecuzione: %.2f ms\n", elapsed_time);

    if(trovato == -1){
        printf("\nl'elemento cercato non esiste nel vettore\n");
    } else {
        printf("\nl'elemento trovato è in posizione %d: %d\n", trovato, vett[trovato]);
    }
}