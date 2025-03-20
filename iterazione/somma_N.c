/*Esercizio: calcolare la somma dei primi numeri  */
	

# include <stdio.h>
	
  int main(){
    int N;
    int somma=0;

     do{
    printf("Inserisci un numero: ");
    scanf("%d", &N);
    }while(N<0);
    
    printf("Somma dei primi %d numeri: ", N);
    for (int i = 1; i <= N; i++){
        somma += i;
      
        printf("%d", i);
        if (i < N) 
            printf(" + ");
        
    }
    printf(" = %d\n", somma);

 }
	
  


	
	






