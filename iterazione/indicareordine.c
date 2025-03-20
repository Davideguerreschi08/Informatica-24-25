/*Esercizio: Dati N numeri in input (N è un numero scelto dall'utente maggiore di 2) determinare il valore più piccolo tra quelli incontrati, 
indicandone il numero d'ordine (cioè se era il primo numero inserito, il secondo o terzo e così via). */
	

# include <stdio.h>
	
	int main(){
    int N=0;
    int num=0; 
    int cnt_min=0;
    int n_min=0;

        do{
            printf("inserisci un numero: ");
            scanf("%d", &N);
        }while(N<2);

            for(int i=0; i<N; i++){
                printf("inserisci un altro numero: ");
                scanf("%d", &num);
                if(num<cnt_min){
                    cnt_min++;
                   n_min=num;
                }
                if(num==n_min){
                    num=n_min;
                    cnt_min=num;
                }
               
            }
            printf("il numero minore inserito è: %d", n_min);
            printf("\ned era in posizione numero %d", cnt_min);
    }
	
  


	
	






