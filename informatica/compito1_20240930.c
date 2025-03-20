

/* Esercizio
	Verificare se un numero
	dato in input è divisibile sia per 3 sia per 5
	*/


# include <stdio.h>


int main(){

     int a;

    
    printf("Inserisci un numero: ");
    scanf("%d", &a);

   
    if (a % 3 == 0 && a % 5 == 0) {
        printf("%d è divisibile sia per 3 che per 5.\n", a);
    else {
        printf("%d non è divisibile sia per 3 che per 5.\n", a);
    }

    return 0;
}


