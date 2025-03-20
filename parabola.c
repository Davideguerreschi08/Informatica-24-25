/*dato i coefficenti assegnati di un equazione di secondo grado 
1)determinarele radici dell' equazione
2)determinare la concavità della parabola*/

#include<stdio.h>
#include<math.h>

void delta(float _a, float _b, float _c ){
    return pow(_b,2)-4*_a*_c;
}
void radici(float _a, float _b, float _c,float *_delta, float *_r1, float *_r2){
   if(controllo_delta(*_delta)==1) {
    *_r1=(-1*_b-sqrt(*_delta))/(2*_a);
    *_r2=(-1*_b-sqrt(*_delta))/(2*_a);
    }else if(controllo_delta(*_delta)==2){
        *_r1=((-1)*_b)(*_delta)) / (2*_a);
    }else{
        printf("");
    }
}

int main(){
    float a, b, c, delta,r1, r2;
    
    do{
        printf("inserisci un valore per A: ");
        scanf("%d",&a);
        printf("inserisci un valore per B: ");
        scanf("%d",&b);
        printf("inserisci un valore per C: ");
        scanf("%d",&c);
    }while(a<=0|| b<0||c<0);


}