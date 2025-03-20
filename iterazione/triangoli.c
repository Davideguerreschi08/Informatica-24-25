/*Esercizio: Scrivi un programma in C che disegni usando 
degli asterischi * un triangolo rettangolo di lato 8 e poi un triangolo isoscele di base 9 e altezza 9. */
	

# include <stdio.h>
	
	int main(){
      for (int i = 1; i <=8; i++) {
        for (int j = 1; j <= i; j++) {
            
            if (i==8 || j==1 || j==i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    }
  


	
	






