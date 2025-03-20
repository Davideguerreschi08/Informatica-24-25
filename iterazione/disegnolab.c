/*vEsercizio:  */
	

# include <stdio.h>
	
	int main(){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(i==0 || i==9 || i==9-j){
                    printf("*");
                }else{
                    printf(" ");
                }
              }
            printf("\n");
        }
    }
	
  


	
	






