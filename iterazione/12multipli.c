/*Esercizio: Scrivi un programma che visualizzi i primi 12 multipli di un numero n inserito da tastiera usando un ciclo a conteggio.  */
	

# include <stdio.h>
	
	int main(){
    int n=0;
    int multiplo;
        printf("inserisci un numero: ");
        scanf("%d", &n);

        for(int i=1; i<=12; i++){
           
            printf("\ni multipli di %d sono: %d", n, n*i);
        }
    }
	
  


	
	






