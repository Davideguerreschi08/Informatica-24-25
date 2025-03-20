
/* Esercizio
	
	*/


# include <stdio.h>
	
	int main(){
	int n1;
	printf("inserisci un numero: ");
	scanf("%d", &n1);

	while (n1>=2)
	{
		n1=n1-2;
	}
	if(n1==0){
		printf("il numero è pari");
	}
	else
	printf("il numero è dispari ");
}

