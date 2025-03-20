
/* Esercizio: stabilire se un numero è 
	dispari controllando l' ultima cifra meno significativa
	*/


# include <stdio.h>
	
int main(){

	float num, cifra;
	 printf("inserisci un numero: ");
		scanf("%f", &num);
		
		cifra= num %10;
		if(cifra %2==0);
		
		printf("il numero %f è pari", num);

		else
			printf("il numero %f è dispari", num);
}

