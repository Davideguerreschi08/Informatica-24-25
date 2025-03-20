/*Esercizio: (pag223 N17) Numero perfetto; scrivi un programma che ricerca i primi 3 
numeri perfetti e li visualizza sullo schermo
es: n=6 div=1,2,3 somma=1+2+3=6 (quindi perfetto)
6 28 496*/
	

# include <stdio.h>
	
	int main(){
    int somma=0;

    for(int i=1; i<=500; i++){   
        somma=0;
        for(int j=1; j<=i/2; j++){
            if(i%j==0){
                somma+=j;
            }
        }
        if(somma==i){
            printf("%d ", i);
        }

    }printf("\n");
     

}
	
  


	
	






