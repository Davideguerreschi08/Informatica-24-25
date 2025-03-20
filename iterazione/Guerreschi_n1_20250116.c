/*Esercizio: Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso. */
	

# include <stdio.h>
	
	int main(){
        int N=0;
        int num=0;
        int cnt_prim=0;
        int cnt_n=0;

            printf("inserisci un numero da usare come intervallo: ");
            scanf("%d", &N);
        for(int i=0; i<N; i++){
            printf("inserrisci un numero: ");
            scanf("%d", &num);
                if(num%1==0 && num%num==0){
                    cnt_n++;
                    cnt_prim++;
                }
        }printf("i numeri stampati sono %d e quelli naturali sono %d", cnt_n, cnt_prim);
    }
	
  


	
	






