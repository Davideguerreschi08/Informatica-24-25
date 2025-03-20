/*Esercizio:  Scrivi un programma che esegue il calcolo del
 fattoriale di un numero num inserito.*/
	

# include <stdio.h>
	
	int main(){
        int n;
        int n_fattoriale=1;

        printf("inserisci un numero: ");
        scanf("%d", &n);
        for(int i=1; i<=n;i++){
            n_fattoriale*=i;

        }
            printf("il numero fattoriale di %d è %d", n, n_fattoriale);
    }
	
  


	
	






