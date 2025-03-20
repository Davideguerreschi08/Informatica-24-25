/*Esercizio: dato un numero stampare i suoi divisori */
	

# include <stdio.h>
	
	int main(){
    int n;
    int cnt=0;
    int divisore;

    divisore=2;
    printf("inserisci un numero: ");
    scanf("%d", &n);
    while (divisore<n/2)
    {
       if(n%divisore)
            printf("%d è un divisore di %d\t", divisore, n);
        divisore++;


    }
    printf("1\t%d",n);
    printf("\nil programma finisce");
}
	
  


	
	






