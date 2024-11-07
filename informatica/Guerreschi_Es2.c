
/* Esercizio:INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/
	
	


#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
	int somma = n1 + n2 + n3 + n4;
	float media;

    printf("Inserisci il primo numero: \n");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: \n");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero: \n");
    scanf("%d", &n3);
	 printf("Inserisci il quarto numero: \n");
    scanf("%d", &n4);


    if (somma > 200) {
        printf("La somma dei numeri è: %d\n", somma);
        printf("La somma supera 200.\n");
    } else {
        printf("La somma dei numeri è: %d\n", somma);
        printf("La somma non supera 200.\n");
    }
	media= n1+n2+n3+n4/4;
	printf("la media é %f");
	

    return 0;
}


