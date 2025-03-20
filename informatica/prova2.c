/*ESERCIZIO
	calcola l'area di un triangolo
	inserendola base e l'altezza
	*/
#include <stdio.h>

int main(){
		float base, altezza, area; //dichiarazione
	base=0;
	altezza=0;
	area=0;
	
	printf( "inserisci un valore alla base");
	scanf("%f",&base);
	
	print("inserisci un valore all' altezza");
	scanf("%f", &altezza);
	
	area=(base*altezza)/2;
	printf("l'area del trangolo è: %f0.2", area);	

}

	
	
