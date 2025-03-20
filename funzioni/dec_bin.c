/*Esercizio: decimale a binario, dato un valore eseguire la conversione
da decimale a binario */
	

# include <stdio.h>
#include <math.h>	
    long conversione_dec(int _num);

	int main(){
    int num=0;
    long conv=0;

        do{
            printf("inserisci un numero intero positivo: ");
                scanf("%d", &num);
        }while(num<=0|| num>255);

        conv=conversione_dec(num);
        printf("il numero %d in binario è :%ld\n ", num, conv);
        return 0;

    }
	long conversione_dec(int _num){
        int q= _num; 
        int resto=0;
        int n_finale=0;
        int cnt=0;
        while(q!=0){
            resto=q%2;
            q=q/2;
             n_finale+=resto*pow(10,cnt);
            cnt++;
            
        }
        return n_finale;
    }
  


	
	






