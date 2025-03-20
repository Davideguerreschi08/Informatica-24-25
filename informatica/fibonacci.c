
/* Esercizio: Scrivi un programma in c che sia necessariamente maggiore di 3 e che indica quanti valori
della sequenza di Fibonacci mostrare.
es: se l' utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8*/
	

# include <stdio.h>
	
	int main(){
    int n;

   
    printf("Inserisci un numero maggiore di 3 per mostrare i numeri di Fibonacci: ");
    scanf("%d", &n);

    
    while (n <= 3) {
        printf("Il numero deve essere maggiore di 3. Inserisci un nuovo numero: ");
        scanf("%d", &n);
    }

    int a = 1, b = 1, c;
    int count = 2;  

    printf("%d %d ", a, b);

   
        c = a + b;  
        printf("%d ", c);

        a = b;
        b = c;
        count++;
    }
    printf("\n");
	
    return 0;
}

	
	
}

