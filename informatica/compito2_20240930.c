
/* dati 3 numeri stampare il più piccolo, il più grande e la loro media
	*/


# include <stdio.h>
	
	int main() {
    float a, b, c, media;
    float max, min;


   
    printf("Inserisci il primo numero: ");
    scanf("%f", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);

    printf("Inserisci il terzo numero: ");
    scanf("%f", &c);

    
    if (a >= b && a >= c) {
        max = a;
    else if (b >= a && b >= c) {
        max = b;
 }  else {
        max = c;
    }

   
    if (a <= b && a <= c) {
        min = a;
}   else if (b <= a && b <= c) {
        min =b;
}   else {
        min = c;
    }

   
    media = (a + b+ c) / 3;

    // Stampa i risultati
    printf("Il numero più piccolo è: %.2f\n", min);
    printf("Il numero più grande è: %.2f\n", max);
    printf("La media è: %.2f\n", media);
    

    return 0;
}
