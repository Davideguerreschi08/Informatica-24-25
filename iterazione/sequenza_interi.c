/*Esercizio: Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0 
(cioè il programma termina quando viene inserito 0) e ne ricerca il valore minimo visualizzandolo sullo schermo. */
	

# include <stdio.h>
	
	int main(){
    int n=0;
    int min;
    int cnt=0;
    
    
       do{
        
        printf("inserisci un numero: ");
        scanf("%d", &n);
        printf("il numero è: %d", n);
        min=n;
        cnt--;

       }while (n!=0);

    printf("\ni numeri inseriti sono: %d\n", cnt);
    printf("il numero minore inserito è: %d\n", min);
    }
    

	
  


	
	






