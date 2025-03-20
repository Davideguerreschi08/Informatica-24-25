/*Esercizio: Data una serie di N numeri (con N scelto dall'utente maggiore di 3) determinare il valore più grande e quello immediatamente inferiore (il secondo)*/
	

# include <stdio.h>
	
	int main(){
         int n=0;
    int max=0;
    int min=0;
    int val=0;
        do{
            printf("Inserisci un numero maggiore di 3\n");
            scanf("%d", &n);
        }while(n<=3);

            for(int i=1; i<=n; i++){
                printf("Inserisci %d valori\n", n);
                scanf("%d", &val);
                if(val>max){
                    min=max;
                    max=val;
                }
            }printf("Il valore più grande è %d e il secondo numero maggiore è %d\n", max, min);


    }
	
  


	
	






