/*Esercizio: calcolare il fattoriale di un numero  */
	

# include <stdio.h>
	
    void calcola_fattoriale(int *_num, long *_fattoriale);

	int main(){
        int n=0;
        long int fattoriale=1;
        printf("inserisci un numero: ");
        scanf("%d", &n);
        calcola_fattoriale(&n, &fattoriale);
        printf("il fattoriale di %d è %ld\n", n, fattoriale);
        return 0;
    }
	
    void calcola_fattoriale(int *_num, long *_fattoriale){
         
        for(int i=1; i<=*_num; i++){
            *_fattoriale*=i;
        }
        
    }


	
	






