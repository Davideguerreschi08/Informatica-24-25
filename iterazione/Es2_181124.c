/*Esercizio: Leggere una sequenza di numeri. Terminare la lettura quando 
si incontra un numero pari, comunicare quanti valori uguali a 0 si sono presentati.  */
	

# include <stdio.h>
	
	int main(){
    int n;
    int cnt=0, cnt_zero=0;

     do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
        cnt++;
        if (n==0){
            cnt_zero++;
        }
    }while (n % 2 != 0);
    printf("in numero inseriti sono: %d", cnt);    
    
    }
	
  


	
	






