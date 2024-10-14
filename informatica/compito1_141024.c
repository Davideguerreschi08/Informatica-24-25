
/* Esercizio: Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica
	
	*/


# include <stdio.h>
	
	int main(){

	int a, b, c;
	
	printf("inserisci il valore di a:  ");
	scanf("%d", &a);
		printf("inserisci il valore di b:  ");
	scanf("%d", &b);
	printf("inserisci il valore di c: ");
	scanf("%d", &c);
if (2 * b == a + c)
    printf("I numeri sono in progressione aritmetica.");
else
    printf("I numeri non sono in progressione aritmetica.");

}

