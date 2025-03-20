/*Esercizio:  Scrivi un programma che chieda un numero intero all'utente e 
mostri tutti i numeri pari compresi tra il numero scelto e 0*/
	

# include <stdio.h>
	
	int main(){
        int num;
    do
    {
        printf("Inserisci un valore: ");
        scanf("%d", &num);
    } while (num<0);
    for(int i=num; i>=0; i=i+2){
        printf("%d\n", i);
    }
    }
	
  


	
	






