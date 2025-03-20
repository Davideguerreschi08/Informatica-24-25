#include <stdio.h>

int main() {
    int n, x;
    int cnt_max = 0, cnt_min = 0, cnt_uguali = 0;
    
    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    
    printf("Inserisci il valore x: ");
    scanf("%d", &x);
    
    // Ciclo per acquisire N numeri e fare le comparazioni
    for (int i = 0; i < n; i++) {
        int num;
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &num);
        
        if (num > x) {
            cnt_max++;
        } else if (num < x) {
            cnt_min++;
        } else {
            cnt_uguali++;
        }
    }
    
    // Risultati
    printf("Numeri maggiori di %d: %d\n", x, cnt_max);
    printf("Numeri minori di %d: %d\n", x, cnt_min);
    printf("Numeri uguali a %d: %d\n", x, cnt_uguali);
    
    return 0;
}

	
  


	
	






