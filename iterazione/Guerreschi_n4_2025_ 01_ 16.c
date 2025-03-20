/*Esercizio: Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5. */
	

# include <stdio.h>
	
	int main(){
    int n=0;
    int num=0;
    int crescente=0;
    int decrescente=0;
    int cnt=0;
    int scelta=0;

     
        do
        {
            printf("inserisci una serie di numeri: ");
            scanf("%d", &n);
           
        } while(n==0);
        
        printf(" inserisci il numero della scelta");
        printf("\n1. ordine crescente");
        printf("\n2. ordin2 decrescente");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            if(n)
            break;
        
        default:
            break;
        }


       
    }
	
  


	
	






