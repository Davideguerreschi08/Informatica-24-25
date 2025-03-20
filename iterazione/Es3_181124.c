/*vEsercizio: Leggere una sequenza di numeri interi. Terminare la letture quando
 si incontra un valore pari a zero. Determinare quanti sono stati i valori pari e i valori dispari.  */
	

# include <stdio.h>
	
	int main(){
    int n;
    int cnt=0;
    int cnt_pari=0;
    int cnt_dispari=0;

     do{
            printf("\ninserisci un numero: ");
            scanf("%d", &n);
            printf("\nil numero inserito è: %d", n);
            
            cnt++;
            if(n %2 ==0){
             cnt_pari++;
            }
            else
            cnt_dispari++;
        }while(n!=0);
        printf("i valori pari sono: %d\n", cnt_pari);
        printf("i valori dispari sono: %d\n", cnt_dispari);
    }
	
  


	
	






