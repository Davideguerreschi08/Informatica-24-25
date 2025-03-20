/*Esercizio: dati N numeri (strettamente maggiore di 5), calcolare 
la somma dei numeri negativi e dei numeri positivi  */
	

# include <stdio.h>
	
	int main(){
        int N;
        int num;
        int somma=0;
        int somma_n=0;
        do{
            printf("inserisci un valore: ");
            scanf("%d", &N);
        }while(N<=5);

        for(int i=0; i<N; i++){
            printf("inserisci un altro numero: ");
            scanf("%d", &num);
            if(num>=0){
            
                somma+=num;
            } else{
                somma_n+=num;
            }
       
        
         }
         printf("la somma dei numeri positivi è: %d", somma);
        printf("la somma dei numeri negativi è: %d", somma_n);
  


	
	






