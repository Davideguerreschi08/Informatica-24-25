/*Esercizio: stampa i primi N numeri  dispari sucessivi al numero A  */
	

# include <stdio.h>
	
	int main(){
        int N=0;
        int A=0;

        do{
            printf("inserisci il numero di valori da stampare: ");
            scanf("%d", &N);
            printf("inserisci un numero: ");
            scanf("%d", &A);
        }while(N<0||A<0);
        
        if(N%2==0){
            N++;
        }

        for(int i=N; i<A+N; i+=2){
            printf("\n%d", i);
        }

    }
	
  


	
	






