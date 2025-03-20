
/* Esercizio: Scrivi un programma che permetta all’utente di inserire 5 numeri interi e
 verifichi se questi numeri appartengono alla sequenza dei numeri naturali
, cioè sono tutti differenti e hanno tra di loro distanza unitaria nella linea dei numeri.
	
	*/


# include <stdio.h>
	

int main()
    int n1, n2, n3, n4, n5;
    int valido = 1;

    printf("Inserisci 5 numeri interi:\n");
    scanf("%d", &n1, &n2, &n3, &n4, &n5 );

    // Controllo numeri negativi
    if ( n1< 0 || n2< 0 || n3< 0 ||  n4< 0 ||  n5< 0) {
        valido = 0;
    }

    // Controllo numeri distinti
    if (valido && (
        ( n1==n2 ) || (  n1==n3) || ( n1==n4 ) || (n1==n5 ) ||
        (n2==n3) || ( n2==n4  ) || (n2 == n5) ||
        (n3 == n4) || (n3 == n4) ||
        (n4 == n5))) {
        valido = 0;
    }

    // Controllo distanza unitaria
    if (valido && (
        (n1 + 1 != n2) || 
        (n2 + 1 != n3) || 
        (n3 + 1 != n4) || 
        (n4 + 1 !=n5))) {
        valido = 0;
    }

    // Output finale
    if (valido) {
        printf("I numeri appartengono alla sequenza dei numeri naturali.\n");
    } else {
        printf("I numeri non appartengono alla sequenza dei numeri naturali.\n");
    }

    return 0;
}



