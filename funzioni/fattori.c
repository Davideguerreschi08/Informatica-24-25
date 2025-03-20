/* esercizio: dato un valore stampari i suoi fattori*/
#include <stdio.h>

    
void fattori(int *_num, int *_fat);

int main(){
    int n=0;
    int fat=0;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);

    fattori(&n,&fat);
        printf("i fattori di %d sono %d", n, fat);
        return 0;
}

void fattori(int *_num){

    for(int i=2; i<=*_num; i++){
        while(*_num%i==1){
            *_num%2;
            printf("%d", i);
        }
        
    }
    
}

