/*Esercizio: Sviluppa un programma che eroga il resto per un distributore di bevande automatico. 
Il cliente sceglie un prodotto (numero intero da 1 a 5) e gli viene visualizzato il costo: quindi inizia a inserire monete nell’apposita fessura,
 che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, il programma interrompe l’acquisizione della sequenza e restituisce una serie di numeri interi corrispondenti 
al resto in monete da 1 e 5 centesimi.
 */
	

#include <stdio.h>

int main() {
    int prodotto = 0;
    int monete = 0;
    int costo = 0;
    int Moneteinserite = 0;
    int resto = 0;

    
    printf("Scegli un prodotto: \n");
    printf("1: Prodotto 1 - 90 centesimi\n");
    printf("2: Prodotto 2 - 65 centesimi\n");
    printf("3: Prodotto 3 - 80 centesimi\n");
    printf("4: Prodotto 4 - 100 centesimi\n");
    printf("5: Prodotto 5 - 50 centesimi\n");

    printf("Inserisci il numero del prodotto (1-5): ");
    scanf("%d", &prodotto);

    switch (prodotto) {
        case 1:
            costo = 90;
            printf("Hai scelto il prodotto 1. Il suo prezzo è di 90 centesimi\n");
            break;
        case 2:
            costo = 65;
            printf("Hai scelto il prodotto 2. Il suo prezzo è di 65 centesimi\n");
            break;
        case 3:
            costo = 80;
            printf("Hai scelto il prodotto 3. Il suo prezzo è di 80 centesimi\n");
            break;
        case 4:
            costo = 100;
            printf("Hai scelto il prodotto 4. Il suo prezzo è di 100 centesimi\n");
            break;
        case 5:
            costo = 50;
            printf("Hai scelto il prodotto 5. Il suo prezzo è di 50 centesimi\n");
            break;
        default:
            printf("Scelta non valida\n");
            return 1;
    }

    while ( Moneteinserite < costo){
        printf("Inserire monete (1, 5, 10, 20, 50 centesimi): ");
        scanf("%d", &monete);

        if (monete == 1||monete == 5||monete == 10||monete == 20||monete == 50){
             Moneteinserite += monete;
            printf("Moneta inserita: %d centesimi. Importo totale: %d centesimi\n", monete,  Moneteinserite);
        } else{
            printf("Moneta non valida! Inserisci una moneta valida\n");
        }
    }

    resto =  Moneteinserite - costo;

    if (resto > 0){
        int moneteDa5 = resto / 5;
        int moneteDa1 = resto % 5;

        printf("Resto: %d centesimi.\n", resto);
        printf("%d monete da 5 centesimi.\n", moneteDa5);
        printf("%d monete da 1 centesimo.\n", moneteDa1);
    } else{
        printf("Nessun resto. Grazie per l'acquisto!\n");
    }

    return 0;
}

	
  


	
	






