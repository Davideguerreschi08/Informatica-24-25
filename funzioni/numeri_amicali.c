/*data una sequenza di valori verificare se i valori presi a coppie risultano essere amicali, si termina 
quando uno dei valori è 0*/
#include <stdio.h>

void  numeri_amicali (int _num);

int main(){
	int n1=0;
	int n2=0;
	int sum1=0;
	int sum2=0;
	
    do{
	    do{
			printf("inserisci il primo numero: ");
            scanf("%d", &n1);
            printf("inserisci il secondo numero: ");
            scanf("%d", &n2);
	    }while(n1!=0||n2!=0);
    }while(n1<=0 && n2<=0);

	
}