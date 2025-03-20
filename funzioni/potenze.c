/*esercizio: Scrivete una funzione avente due parametri interi(passati per valore) B ed E
 che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/

 #include <stdio.h>
 int calcola_potenza(int _B, int _E);
 
 int main(){
    int n1=0;
    int n2=0;
    int potenza=0;

    
        printf("inserisci una valore di base: ");
        scanf("%d", &n1);
        printf("inserisci un valore per l' esponente: ");
        scanf("%d", &n2);
       
    
       potenza=calcola_potenza(n1, n2);
        printf("%d^%d è uguale a: %d", n1, n2, potenza);
        return 0;
 }
    int calcola_potenza(int _B, int _E){
        int potenza=1;
        for(int i=1; i<=_E; i++){
         potenza*=_B;
        }
        return potenza;
    }
    