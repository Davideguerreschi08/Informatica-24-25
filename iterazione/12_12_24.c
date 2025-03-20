/*Esercizio: dati 10 numeri determinare il valore maggiore e
 quante volte compare */
	

# include <stdio.h>
	
	int main(){
        int n=0;
        int cnt_max=0;
        int n_max=0;
        ;

        for(int i=0; i<10 ;i++){
            printf("inserisci un numero: ");
            scanf("%d", &n);
            if(n>n_max)
                cnt_max++;
                n_max=n;
            if(n==n_max)
            n_max=n;
            cnt_max=n;

        }
        printf("il numero è maggiore è: %d",n_max);
        printf("il numero è comparso %d", cnt_max);
    }
	
  


	
	






