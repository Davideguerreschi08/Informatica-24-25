/*vEsercizio: leggere una squenza di numeri visualizzarla.
si termina non appena arriva uno 0 e contare i valori inseriti*/
	

# include <stdio.h>
	
	int main(){
    int n1;
    int cont=0;

    printf("inserisci un numero: ");
        scanf("%d", &n1);
        
    while(n1!=0){
        printf("inserisci un numero: ");
        scanf("%d", &n1);
        printf("il numero è: %d\n", n1);
        cont++;
    }
    printf("il numero inserito è 0");
    printf("\ni numeri inseriti sono: %d", cont);
    }
	
  


	
	






