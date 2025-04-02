/*dopo aver caricato un vettore numerico confrontare la somma delle 
componeneti di indice pari con la somma delle componenenti 
dispari e dire se la somma maggiore è divisisbile per un assegnato valore K diverso da 0*/
#include <stdio.h>
#include "libArray.h"
#include "libArray.c"

#define DIM 4

int main(){
    int v1[DIM], sumpari=0, sumdispari=0, summaggiore=0, K;
    printf("inserisci la cifra K: ");
        scanf("%d", &K);
    riempiVettore(v1, DIM);
    for(int i=0; i<DIM;i++){
        if(i%2==0){
            sumpari+=v1[i];
        }else{
            sumdispari+=v1[i];
        }
    }
    
}