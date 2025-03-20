/*Esercizio:  PROGETTARE UN ALGORITMO CHE LEGGA UN NUMERO
b<a E SCRIVA QUANTE VOLTE A è DIVISIBILE PER B*/
	

# include <stdio.h>
	
	int main(){
        int a=0, temp;
        int b=0, resto;
        int cnt_zero=0;
        do{
        printf("inserisci il primo numero: ");
        scanf("%d", &a);
        printf("inserisci il secondo numero: ");
        scanf("%d", &b);
        }while(b>a || a==0 || b==0);
            
            do{
                resto=a%b;
                if(resto==0){
                    cnt_zero++;
                }
                a/=b;
            }while(resto!=0);
            printf("il numero è divisibile per %d volte", cnt_zero);


    }

	
  


	
	






