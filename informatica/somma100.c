
/* Esercizio: chiedi all' utente di inserire 
un massimo di 5 numeri fino a che la somma non supera 100*/
	
	


# include <stdio.h>

	
	int main(){
		
    int n1;
    int somma = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &n1);
    somma += n1;

    if (somma > 100) {
        printf("Hai superato la soglia di 100!\n");
    } else {
        printf("Inserisci un altro numero: ");
        scanf("%d", &n1);
        somma += n1;

        if (somma > 100) {
            printf("Hai superato la soglia di 100!\n");
        } else {
            printf("Inserisci un altro numero: ");
            scanf("%d", &n1);
            somma += n1;

            if (somma > 100) {
                printf("Hai superato la soglia di 100!\n");
            } else {
                printf("Inserisci un altro numero: ");
                scanf("%d", &n1);
                somma += n1;

                if (somma > 100) {
                    printf("Hai superato la soglia di 100!\n");
                } else {
                    printf("Inserisci un altro numero: ");
                    scanf("%d", &n1);
                    somma += n1;

                    if (somma > 100) {
                        printf("Hai superato la soglia di 100!\n");
                    }
                }
            }
        }
    }

    printf("Somma finale: %d\n", somma);
    return 0;
}

}

