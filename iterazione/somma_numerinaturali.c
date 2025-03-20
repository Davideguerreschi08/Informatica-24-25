/*Esercizio: Scrivi un programma che visualizzi la somma
 dei quadrati dei primi 12 numeri naturali successivi a 8 */
	

# include <stdio.h>
	
	int main(){
    int sommaq=0;
    int inizio;
    int quantita;


        printf(" inserisci il valore iniziale: ");
            scanf("%d", &inizio);
            do{
        printf("iniserisci quanti elementi vuoi considerare: ");
            scanf("%d", &quantita);
            }while(quantita<=0);
    for(int i=inizio+1; i<=quantita; i++){
        sommaq=i*i;
    
    }
       printf("la somma dei numneri naturali è: %d", sommaq);

    }
	
  


	
	






