/*Esercizio: Scrivi un programma che chieda un numero intero all'utente e
 mostri tutti i numeri compresi tra 0 e il numero scelto */
	

# include <stdio.h>
	
	int main(){
         int num;
         do
    {
        printf("Inserisci un valore: ");
        scanf("%d", &num);
    } while (num<0);
    for(int i=0; i<num; i++){
        printf("%d\n", i);
    }
 }
	
  


	
	






