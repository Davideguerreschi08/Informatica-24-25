
/* Esercizio: la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data
una somma di denaro calcolare il controvalore.*/
	
	


# include <stdio.h>
	
	int main(){
		float dollari;
		float euro;
		int cambio;
		const int cambioeuro=1;
		const float cambiodollari=1.23;
		
		
		printf("1. scambio euro-dollaro\n");
		printf("2. scambio dollaro-euro\n");
		printf("inserisci il tipo di cambio: ");
		scanf("%d", &cambio);
		
		if(cambio==1){
			printf("inserisci il numero di euro: ");
			scanf("%f", &dollari);
			dollari= euro* cambiodollari;
			printf("il cambio è di %.2f\n dollari", dollari);
		}
		else if (cambio==2){
			printf("inserisci il numero di dollari: ");
			scanf("%f", &euro);
			euro= cambioeuro* dollari;
			printf("il cambio è di %.2f\n euro", euro);
	}
		
		
		
	}
		
		
		
		
	


