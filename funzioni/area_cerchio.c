/*Esercizio: calcolare l' area e la circonferenza del cerchio */
	

#include <stdio.h>
#define PG 3.14

void area(int _Raggio, float *_Area);
void circonferenza(int _R, float *_Circonferenza);

int main(){
    float R, C, A;
    
    do{
        printf("inserisci un valore\nscelta: ");
        scanf("%f",&R);
    }while(R<=0);

    area(R, &A);
    circonferenza(R, &C);
    printf("la circonferenza del cerchio vale: %.2f \nmentre l'area vale: %.2f",C, A);
}
void area(int _Raggio, float *_Area){
    *_Area=(_Raggio*_Raggio)*PG;
}
void circonferenza(int _Raggio, float *_Circonferenza){
    *_Circonferenza=_Raggio*2*PG;
}
    


	
	






