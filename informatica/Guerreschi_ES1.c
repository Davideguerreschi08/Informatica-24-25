
/* Esercizio: CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/
	
	


# include <stdio.h>
	
	int main(){

	int k;
	int conta_cifre;
	printf("scegli un numero: ");
	scanf("%d", &k);
	if(k<9999 && k<0){ 
		printf("scegli un altro numero\n");
	}
	if (k<=9){
		printf("il numero ha una cifra\n");

	}
	if (k>=10 && k<=99){
		printf("il numero è composto da 2 cifre\n");
		conta_cifre= k/10;
		printf("le cifre singole sono %d %d \n", conta_cifre);
	}
	if (k>=100 && k<=999){
		printf("il numero  è composto da 3 cifre\n");
		conta_cifre= k%10;
		conta_cifre= k%100;
		printf("le cifre singole sono %d %d %d\n", conta_cifre);
	}
	if(k>=1000 && k<=9999){
		printf("il numero è composto da 4 cifre\n");
		conta_cifre= k%10;
		conta_cifre= k%100;
		conta_cifre= k%1000;
		printf("le cifre singole sono %d %d %d %d\n", conta_cifre);
	}

		
}
