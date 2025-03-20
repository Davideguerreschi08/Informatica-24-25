/*esercizio: dato un numero intero positivo in input stampare
 il quadrato con somme successive*/
 #include<stdio.h>

 int calcola_quadrato(int _B);
 
 int main(){
    int n1=0;
    int quadrato=0;

        printf("inserisci una valore: ");
        scanf("%d", &n1);

       quadrato=calcola_quadrato(n1);
        printf("il quadrato di %d è %d", n1, quadrato);
        
        return 0;
 }
    int calcola_quadrato(int _B){
        int quadrato=1;
        for(int i=1; i<=2; i++){
         quadrato*=_B;
        }
        return quadrato;
    }