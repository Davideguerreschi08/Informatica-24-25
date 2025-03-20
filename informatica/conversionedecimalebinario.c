
/* Esercizio: Conversione da decimale a binario
introducendo un valore da 0 a 63*/
	
	
# include <stdio.h>
	
	int main(){
	int n0=0, n1=0, n2=0, n3=0, n4=0, n5=0;
	int num, quoz;

	printf("inserisci un numero compreso tra 0 e 63: ");
	scanf("%d", &num);
		quoz=num;
	if(num>=0 && num<=63){
		//converto il numero
		if(quoz!=0){
			n0=quoz%2; // in n0 abbiamo inserito il resto di bit meno significativo
			quoz=quoz/2;// abbimo aggiornato il valore del quoziente
			

		}
		

		if(quoz!=0){
			n1=quoz%2; // in n0 abbiamo inserito il resto di bit meno significativo
			quoz=quoz/2;// abbimo aggiornato il valore del quoziente
			

		}
		
			if(quoz!=0){
			n2=quoz%2; // in n0 abbiamo inserito il resto di bit meno significativo
			quoz=quoz/2;// abbimo aggiornato il valore del quoziente
			

		}
		
		if(quoz!=0){
			n3=quoz%2; // in n0 abbiamo inserito il resto di bit meno significativo
			quoz=quoz/2;// abbimo aggiornato il valore del quoziente
			

		}
		
		if(quoz!=0){
			n4=quoz%2; // in n0 abbiamo inserito il resto di bit meno significativo
			quoz=quoz/2;// abbimo aggiornato il valore del quoziente
			

	

		if(quoz!=0){
7			n5=quoz%2; // in n0 abbiamo inserito il resto di bit meno significativo
			quoz=quoz/2;// abbimo aggiornato il valore del quoziente
			

		}
		
		printf("\nil numero decimale %d in binario vale: %d%d%d%d%d%d", num, n5,n4,n3,n2,n1,n0);
	}
	else
	printf("il valore inserito non rispetta la richiesta");

} 	




