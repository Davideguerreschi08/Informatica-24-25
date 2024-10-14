
/* Esercizio: Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
 (perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)
	
	*/


# include <stdio.h>
	
	int main(){
	int l1, l2, l3;
	printf("inserisci il primo lato: ");
	scanf("%d", &l1);
	printf("inserisci il secondo lato: ");
	scanf("%d", &l2);
	printf("inserisci il terzo lato: ");
	scanf("%d", &l3);

	if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1)
	printf("il triangolo è realizzabile");
	else
	printf("il triangolo non è realizzabile");
}

