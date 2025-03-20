/*Esercizio: amicali */
	

# include <stdio.h>
	
	int main(){
        int num1, num2, i, sum1=0, sum2=0;

        do{
            printf("inserisci 2 valori: ");
            scanf("%d %d", &num1, &num2);
        }while(num1<=0||num2<=0);

        for(int i=1; i<num1/2; i++){
            if(num1%i==0)
            sum1+=i;
        }
         for(int i=1; i<num2/2; i++){
            if(num2%i==0)
            sum2+=i;
        }
       if(sum1==num2&&sum2==num1)
        printf("\n i numeri sono amicali");
        else
        printf("\n i numeri non sono amicali");
    }
	
  


	
	






