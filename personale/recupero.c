
# include <stdio.h>
	
	int main(){
      int x=1;
      do{
        printf("x=%d", x);
        if(x%3==0){
            x+=3;
        }
        else{
            x++;
        }
      }while(x<15);
     
     
      
    }
    
