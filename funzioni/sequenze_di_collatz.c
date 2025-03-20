/*Esercizio: Considerate la seguente regola: dato un numero intero positivo n, se n è pari lo si divide per 2, se è dispari lo si
moltiplica per 3 e si aggiunge 1 al risultato. Quando n è 1 ci si ferma. 
Questa semplice regola permette di costruire delle sequenze: la sequenza che si costruisce a partire dal numero
n è detta sequenza di Collatz di n. 
Ad esempio, la sequenza di Collatz di  7  è:  7   22   11   34   17   52   26   13   40   20   10   5   16   8  4  2  1 
Lunghezza=17
E’ un noto problema aperto stabilire se ogni sequenza di Collatz termina (cioè, se arriva a 1).  
Scrivere una funzione che, dato un numero, (passando il numero per indirizzo) calcoli ogni volta il nuovo valore di n, determinando così la sequenza di Collatz del numero n e la sua lunghezza.
N.B.: nel testare il programma inserite ad esempio una volta n=7 e poi n=9 */
	

# include <stdio.h>
	
    void sequenza_collatz(int *_num, int *_sequenza);

	int main(){
        int n=0;
        int sequenza=1;
            printf("inserisci un numero: ");
            scanf("%d", &n);
            
            printf("\nla sequenza di collatz di %d è \n%d", n, sequenza);
            sequenza_collatz(&n, &sequenza);
           
            return 0;
    }
         void sequenza_collatz(int *_num, int *_sequenza){
          while (*_num!=1){
           printf("\n%d", *_num);
            if(*_num%2==0){
                *_num/=2;
            }else{
                *_num=*_num*3+1;
            }
            *_sequenza++;
          
         }
            printf("\n1");
            *_sequenza++;
        }

	
	






