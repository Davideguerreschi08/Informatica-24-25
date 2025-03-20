
/* Esercizio:VERIFICARE SE UN NUMERO È POTENZA DEL 2 
E SE LO È DETERMINARE
L’ESPONENTE.
	
	*/


# include <stdio.h>
int main() {
    int n;
     int esponente = 0;

    
    printf("Inserisci un numero: \n");
    scanf("%d", &n);

   
    if (n > 0 && (n & (n - 1)) == 0) {
        
        
        if (n == 1) {
            esponente = 0;
        } else if (n == 2) {
            esponente = 1;
        } else if (n == 4) {
            esponente = 2;
        } else if (n == 8) {
            esponente = 3;
        } else if (n == 16) {
            esponente = 4;
        } else if (n == 32) {
            esponente = 5;
        } else if (n == 64) {
            esponente = 6;
        } else if (n == 128) {
            esponente = 7;
        } 
        } else {
            
            printf("Numero troppo grande per calcolare manualmente l'esponente\n");
            return 1;
        }

        printf("Il numero è una potenza di 2. Esponente: %d\n", esponente);
    } else {
        printf("Il numero non è una potenza di 2.\n");
    }

    return 0;
}



