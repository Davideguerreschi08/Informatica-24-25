/*Esercizio:Esercizio: CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta  */
	

# include <stdio.h>
	
	int main(){
    int numero=0;
    int cntc=0;
    int cntn=0;
    int r,q;
    int n;

    printf("inserisci un numero tra 0 e 9999; ");
    scanf("%d", &numero);
    printf("inserisci la cifra da cercare: ");
    scanf("%d", &n);

    q=numero;
    if( numero>=0 && numero<=9999 && n>=0 && n<=0){
        if(q!=0){
            r=q%10;
            q=q%10;
            cntc++;
            printf("la cifra dell' unità è: %d", r);
            if(r==n)
            cntn++;
        }
        
        
    }
    else 
    {
       printf("hai inserito 0 il programma termina");
       cntc++;
       if(numero==n)
       cntn++;
    }
        if(q!=0){
            r=q%10;
            q=q%10;
            cntc++;
            printf("la cifra dell' unità è: %d", r);
            if(r==n)
            cntn++;
        }
        // e cosi per altre 2 volte
    }
    
    
	
   


	
	






