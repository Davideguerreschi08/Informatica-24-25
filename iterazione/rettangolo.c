/*Esercizio: Scrivi un programma che disegna sullo schermo 3
 cornici quadrate concentriche costituite dal carattere “*” rispettivamente di lato 12, 8, e 4  */
	

# include <stdio.h>
	
	int main(){
        for(int i=1; i<12;i++){
            for(int j=1; j<12;j++){
                   if(i==0 || i==11 || j==0 || j==11){
                printf("* ");
            }else if(i==2 || i==9){
                if(j>=2 && j<=9)
                    printf("* ");
                else 
                    printf("  ");
            }else if(i==4 || i==7){
                if(j>=4 && j<=7 || j==2 || j==9)
                    printf("* ");
                else 
                printf("  ");
            }else if(j==2 || j==9){
                if(i>2 && i<9)
                    printf("* ");
                else 
                    printf("  ");
            }else if(j==4 || j==7){
                if(i>4 && i<7)
                    printf("* ");
                else 
                printf("  ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
               
            }
            
        
    
	
  


	
	






