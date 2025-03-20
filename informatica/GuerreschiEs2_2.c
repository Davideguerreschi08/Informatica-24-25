/* Esercizio:DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.  */
	

# include <stdio.h>

	int main(){
    int N;
    int C;
    int risultato;

    printf("inserisci un numero: ");
    scanf("%d", &N);
    printf("inserisci un altro numero: ");
    scanf("%d", &C);
    
    if(N>20){
    printf("\nInserisci un altro numero: ");
    scanf("%d", &N);
    }
    if(C>9 || C<1){
        printf("inserisci un altro numero");
        scanf("%d", &C);
    }
        if(C*1>N){
            printf("il numero è maggiore di N");
        } else
            printf("il multiplo di C è : %d", risultato);
         if(C*2>N || C+C>N){
            printf("il numero è maggiore di N");
        } else
            printf("il multiplo di C è : %d", risultato);
         if(C*3>N || C+C>N){
            printf("il numero è maggiore di N");
        } else
            printf("il multiplo di C è : %d", risultato);
        

    }
	
  


	
	






