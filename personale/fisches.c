/*Esercizio: Scrivi un programma che realizzi il seguente gioco tra N giocatori umani e il computer. All’inizio del gioco ogni giocatore ha un uguale numero NUM di fiches.
 Vengono giocate alcune manches dove a ogni turno ciascun giocatore effettua una puntata di una fiche e riceve dal banco casualmente una carta:
il giocatore con la carta più alta vince tutte le fiches puntate nella mano corrente;
se c’è più di un singolo giocatore con la carta più alta, il banco prende tutto.
Il gioco termina quando un giocatore ha perso tutte le fiches.

 */
	

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, NUM;
    int fichesGiocatore, carteGiocatore, fichesComputer, carteComputer;
    int i, j, vincitore, maxCarta, bancoVince;
    
   
    srand(time(NULL));
    
  
    printf("Inserisci il numero di giocatori (1-10): ");
    scanf("%d", &N);
    printf("Inserisci il numero di fiches per giocatore: ");
    scanf("%d", &NUM);

   
    fichesGiocatore = NUM;
    fichesComputer = NUM;
    
   
    while (1) {
        int puntate = 0;  
        bancoVince = 0;  
        
       
        printf("\nStato attuale del gioco:\n");
        printf("Giocatore ha %d fiches.\n", fichesGiocatore);
        printf("Computer ha %d fiches.\n", fichesComputer);

        
        if (fichesGiocatore > 0) {
            fichesGiocatore--;  
            puntate++;  
            carteGiocatore = rand() % 13 + 1;  
            printf("Giocatore ha puntato una fiche e ha ricevuto la carta %d.\n", carteGiocatore);
        }
        
        if (fichesComputer > 0) {
            fichesComputer--;  
            puntate++;  
            carteComputer = rand() % 13 + 1; 
            printf("Computer ha puntato una fiche e ha ricevuto la carta %d.\n", carteComputer);
        }

      
        maxCarta = 0;
        vincitore = -1;
        if (fichesGiocatore > 0 && carteGiocatore > maxCarta) {
            maxCarta = carteGiocatore;
            vincitore = 1;  
        }
        if (fichesComputer > 0 && carteComputer > maxCarta) {
            maxCarta = carteComputer;
            vincitore = 2;  
        }

        
        if (fichesGiocatore > 0 && fichesComputer > 0 && carteGiocatore == carteComputer) {
            printf("C'è un pareggio! Il banco vince tutte le fiches.\n");
            bancoVince = 1;
        }

        if (!bancoVince) {
           
            if (vincitore == 1) {
                fichesGiocatore += puntate;
                printf("Giocatore ha vinto e ha preso tutte le fiches puntate.\n");
            }
            else if (vincitore == 2) {
                fichesComputer += puntate;
                printf("Computer ha vinto e ha preso tutte le fiches puntate.\n");
            }
        }

        
        if (fichesGiocatore <= 0) {
            printf("Giocatore ha perso tutte le fiches e viene eliminato dal gioco!\n");
            break;
        }

        if (fichesComputer <= 0) {
            printf("Computer ha perso tutte le fiches e il giocatore ha vinto!\n");
            break;
        }
    }

    return 0;
}



	
	






