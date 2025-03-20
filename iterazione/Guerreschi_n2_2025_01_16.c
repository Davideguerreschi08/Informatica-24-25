/*Esercizio: Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa. */
	

# include <stdio.h>
	
	int main(){
    int n1=0;
    int n2=0;
    int s1=0;
    int s2=0;

        do{
        printf("Inserisci il primo numero: ");
        scanf("%d",&n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d",&n2);
        }while(n1<=0 && n2<=0);

        for(int i=1; i<=n1/2; i++){
            if(n1%i==0){
                s1+=i;

            }
         }
            for(int i=1; i<=n2/2; i++){
                if(n2%i==0){
                    s2+=i;
                }
            }

            if(s1==n2 && s2==n1);
            printf("i numeri %d e %d sono amicali", n1, n2);
       }
	
  


	
	






