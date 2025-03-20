
/* Esercizio: Un
grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:-  reparto
   1 = nessuno sconto -  reparto
   2 = sconto 3%-  reparto
   3 = sconto 2%-  reparto
   4 = sconto 5%
Dati
reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/
	
	


# include <stdio.h>
	
	int main(){
	int reparto;
    float prezzo, sconto, prezzo_scontato;

  
    printf("Inserisci il reparto di appartenenza (1-4): ");
    scanf("%d", &reparto);
    printf("Inserisci il prezzo del prodotto: ");
    scanf("%f", &prezzo);

    
    switch (reparto) {
        case 1:
            sconto = 0;
            break;
        case 2:
            sconto = 0.03; 
            break;
        case 3:
            sconto = 0.02; 
            break;
        case 4:
            sconto = 0.05; 
            break;
        default:
            printf("Reparto non valido.\n");
            return 1; 
    }

    
    prezzo_scontato = prezzo * (1 - sconto);

    
    printf("Il prezzo scontato è: %.2f\n", prezzo_scontato);

    return 0;
}

