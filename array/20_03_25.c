/* inizializzazione riepmpimento con valori pari-stampa
creazione di una libreria personale*/
#include <stdio.h>
#include "libreria.c"

#define DIM 10
int main(){
    int vettore[DIM]={0};
    
    richiediValori(vettore,DIM);
    stampaVettore(vettore,DIM,'-');
}