/*Esercizio: Scrivi un programma che legge un numero NUM strettamente positivo e
 visualizza tutti i numeri pari inferiori a tale numero fino a 0. */
	

#include <stdio.h>

int main() {
    int NUM;
    int cnt=0;
   
    printf("Inserisci un numero positivo: ");
    scanf("%d", &NUM);

   
    if (NUM <= 0) {
        printf("Il numero deve essere strettamente positivo.\n");
    } else {
        int cnt = NUM - 1;  

       
        do {
            if (cnt % 2 == 0) {
                printf("%d\n", cnt);
            }
            cnt--;  
        } while (cnt >= 0);  
    }

    return 0;
}


       
        
          
        
        

    
	
  


	
	






