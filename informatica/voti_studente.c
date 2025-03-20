
/* Esercizio:Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
Poi genera casualmente un secondo voto compreso tra 4 e 8.
Quindi permetta di scegliere quale operazione fare tra:
- 1 mostrare la media dei due voti
- 2 mostrare il voto maggiore tra i due
- 3 mostrare il voto minore tra i due.
- 4 mostrare il numero di voti sufficiente tra i due.
Verificare che il voto inserito sia compreso tra 2 e 10.*/
	
	


# include <stdio.h>
# include <stdlib.h>
# include <time.h>
	
	int main(){
	float voto; 
	float voto2; 
	int	scelta;
	int rand_max=8;
	int rand_min=4;
	float votofinale

	printf("inserisci un voto: ");

	scanf("%f", &voto);
	srand(time(NULL));
	voto2= rand()%5+4;
	printf("il secondo voto è %f", voto2);
	printf("inserisci una scelta\n");
	printf("1 mostrare la media dei due voti\n");
	printf("2 mostrare il voto maggiore tra i due\n");
	printf("3 mostrare il voto minore tra i due.\n");
	printf(" 4 mostrare il numero di voti sufficiente tra i due.\n");
	scanf("%d", &scelta);
	
	switch (scelta){
		case 1:
		voto+voto2/2;
			printf("il voto è %f", votofinale);
		break;

		case 2:
		voto>voto2 || voto<voto2;
			printf("il voto maggiore è %f", votofinale);
		break;

		case 3:
		voto<voto2 || voto>voto2;
			printf("il voto minore è %f", votofinale);
		break;

		case 4:
		if(voto>2 && voto<10);
			printf("il numero %f è sufficente", votofinale);
		break;
		default:
		printf("hai inserito una scelta sbagliata");

	}
		return 0;
}

