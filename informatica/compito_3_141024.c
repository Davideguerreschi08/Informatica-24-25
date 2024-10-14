
/* Esercizio Scrivere un programma che letto due orari in ore,
 minuti e secondi restituisce quale orario viene prima*/


# include <stdio.h>
	
	int main(){
	
	int ore, minuti, secondi;
	int ore2, minuti2, secondi2;

		//VISUALIZZAZIONE DELLE VARIABILI
		printf("inserisci la prima ora: ");
			scanf("%d", &ore);
		printf("inserisci i primi  minuti: ");
			scanf("%d", &minuti);
		printf("inserisci i primi secondi: ");
			scanf("%d", &secondi);
		printf("inserisci la seconda ora: ");
			scanf("%d", &ore2);
		printf("inserisci i minuti della seconda ora");
			scanf("%d", &minuti2);
		printf("inserisci i secondi della seconda ora");
			scanf("%d", &secondi2);


			if(ore<=24 && ore2<=24)
				printf("l' orario è accettabile");
			else
				printf("l'orario non è accettabile");
			
			if(minuti<=59 && minuti2>=59){
				printf("i minuti sono accettabili");
				else
				printf("i minuti non sono accettabili");
			}

			if(secondi<=59 && secondi2>=59){
				printf("i secondi sono accettabili");
			else
			printf("i secondi non sono accettabili")
			
			}
				
			if(ore>ore2){
			printf("il primo orario viene prima\n");

		}
			if(ore>ore2){
			if(minuti>minuti2)
			printf("il primo orario viene prima\n");

		}
			if(ore>ore2){
			if(minuti>minuti2)
			if(secondi>secondi2)	
			printf("il primo orario viene prima");


			}
			if(ore<ore2){
				printf("il secondo orario viene prima");

			}
			
		
			if(ore<ore2){
			if(minuti<minuti2)
			printf(" il secondo orario viene prima");

			}

			if(ore<ore2){
			if(minuti<minuti2)
			if(secondi<secondi2)
			printf(" il secondo orario viene prima");

	
}	