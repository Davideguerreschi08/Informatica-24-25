/*vEsercizio:  */
	

# include <stdio.h>
	
	int main(){
       int somma=0, numero=3;
       while(somma<50){
        if(somma%2!=0){
            somma+=numero;
            numero=numero*3;
        }else{
            somma++;
            numero = numero*2;
        }
        printf("%d-%d\n", numero, somma);
       }
       printf("%d\n", somma);
    }
	
  


	
	






