/*Esercizio:Scrivete una funzione con parametro un intero n(passato per valore) che stabilisca se n è un numero primo.
 La funzione restituirà 1 se il numero non è primo altrimenti 0.    */
	

# include <stdio.h>

	int numero_primo(int _n);

	int main(){
    int num=0;
    int risultato=0;
        printf("inserisci un numero: ");
        scanf("%d", &num);
    risultato=numero_primo(num);
    if(risultato==0){
    printf("il numero è primo\n");
    }else{
    printf("il numero non è primo");
    }
    return 0;

    }

	int numero_primo(int _n){

       if(_n<=1){
        return 1;
       }
       for(int i=2; i*i<=_n; i++){
        if(_n%i==0){
            return 1;
        }
       }
       return 0;
    }
  


	
	






