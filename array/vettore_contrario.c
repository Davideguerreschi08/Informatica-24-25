/*inizializzare un arry con con multiplo di 2 stamparlo al contrario */
#include <stdio.h>

 #define MAX 10
 int main(){
    int val[MAX], j=1;

    for(int i=0; i<MAX; i++){
        val[i]=2*j;
        j++;
        printf("\n%d", val[i]);
    }
    for(int i=MAX-1; i>=0; i--){
       printf("\n%d", val[i]);
    }
 }