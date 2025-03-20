/*Esercizio:  Date N coppie di numeri (con N generato casualmente con valori compresi tra 2 e 7) contare e stampare quelle
 che hanno i valori l'uno l'opposto dell'altro. (ad esempio 3 e -3 oppure -7 e 7) */
	

# include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main(){
     
    int N=0;
    N=random()%6+2;
    int n;
    int n1;
    int i=1;
    int cnt=0;
      srand(time(NULL));
        do{
            printf("Inserisci due numeri\n");
            scanf("%d", &n);
            scanf("%d", &n1);
            if(n==n1*(-1)){
                cnt++;
                printf("%d e %d sono opposti\n", n, n1);
            }
            i++;
        }while(i<=N);
        printf("Numero di coppie uno opposto dell'altro: %d\n", cnt);


    }
	
  


	
	






