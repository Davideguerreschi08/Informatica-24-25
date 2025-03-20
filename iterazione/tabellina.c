/*Dato un numero in input mostrare la sua tabellina. Ad esempio se viene inserito il 4 dovrà essere mostrato 4 8 12 16 20 24 28 32 36 40*/



#include <stdio.h>
int main(){
    
    int num;
    printf("inserisci un numero:");
    scanf("%d", &num);
    for(int i=1; i<=10; i++ ){
        printf("%d\t", num*i);
        
    }
}
  


	
	






