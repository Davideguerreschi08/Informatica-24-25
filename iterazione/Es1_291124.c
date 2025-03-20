/*Esercizio: Scrivi un programma che effettua il prodotto tra due numeri
 utilizzando il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0. */
	

# include <stdio.h>
	
	int main(){
    int n;
    int n2;
    int prodotto; 

    printf("inserisci due numeri: ");
    scanf("%d%d", &n &n2);
    while (n>0 && n2>0){
        printf("inserisci due numeri: ");
        scanf("%d", &n &n2);
        printf("i numeri inseriti sono minori di 0");
    }
        
        for(int i=0; i<n2; i++){
           prodotto += n;
           printf("il prodotto è: %d", prodotto);
        }
    }
	
  


	
	






