
/* Esercizio:Il programma deve permettere all'utente di scegliere un'operazione tra somma, sottrazione, moltiplicazione e divisione.  
Il programma deve quindi chiedere due numeri e restituire il risultato dell'operazione scelta. 
 Usare il costrutto switch case.*/
	
	



	
	#include <stdio.h>

int main() {
    int operazione;
    float n1, n2, risultato;

    printf("Scegli un'operazione:\n");
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");

    printf("Inserisci il numero dell'operazione scelta (1/2/3/4): ");
    scanf("%d", &operazione);

    printf("Inserisci il primo numero: ");
    scanf("%f", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &n2);

    switch (operazione) {
        case 1:
            risultato = n1 + n2;
            printf("Il risultato è: %.2f\n", risultato);
            break;
        case 2:
            risultato = n1 - n2;
            printf("Il risultato è: %.2f\n", risultato);
            break;
        case 3:
            risultato = n1 * n2;
            printf("Il risultato è: %.2f\n", risultato);
            break;
        case 4:
            if (n2 != 0) {
                risultato = n1 / n2;
                printf("Il risultato è: %.2f\n", risultato);
            } else {
                printf("Errore: divisione per zero\n");
            }
            break;
        default:
            printf("Operazione non valida\n");
            break;
    }

    return 0;
}



