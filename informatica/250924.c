// coomento su una riga
/* Esercizio
	scrivere il doppio di un numero
	fornito da tastiera
	*/


# include <stdio.h>
	
	int main(){
		int n, doppio; /*Dichiarazione*/
		
		n=0; //Inizializzazione//
		doppio=0; //Inizializzazione//
		printf("Inserisci un numero: ",n);
		scanf("%d", &n);
		doppio=n*2;
		printf("Il valore doppio è: %d",doppio);
		return 0;
		
}
