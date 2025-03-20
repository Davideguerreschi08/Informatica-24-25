/*Esercizio: Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1 corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione. */
	

# include <stdio.h>

	
	int main(){
       int n;
       int c=0;
       int c2=0;
       int posizione=1;
       int cnt=0;
       int n_cont=0;

            do{
              printf("inserisci un numero più grande di 10: ");
              scanf("%d", &n);
            }while(n<10);

             for(int i=0; i<6; i++){
                     posizione++;
                     c=n%10;
                     n=n/10;
               if(c==posizione){
                     printf("%d è in posizione %d", c, posizione);
               }

              }
              

       
    
       }
	
  


	
	






