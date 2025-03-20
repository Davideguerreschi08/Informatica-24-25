/*Esercizio: da un numero N calcolare il quadrato sommando i primi N numeri 
dispari */
	

# include <stdio.h>
	
	int main(){
        int N=0;
        int q=0;

        do{
         printf("inserisci un numero: ");
         scanf("%d", &N);
        }while(N<0);

            
         for(int i=1; i<=N*2; i+=2){

            q+=i;

         }
         printf("\nil quadrato di %d è %d", N, q);
            
            
         
        
    }
	
  


	
	






