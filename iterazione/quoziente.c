/*vEsercizio:  */
	

# include <stdio.h>
	
	int main(){
    int n=0;
    int n2=0;
    int quoz=0;
    int resto, temp;

        do{
        printf("inserisci due numeri: ");
        scanf("%d %d", &n&n2);
        }while(n<=0 || n2<=0);
        if(n2>n){
            temp=n;
            n=n2;
            n2=temp;
        }
            resto=n;
            while (resto>=n2){
                resto-=n2;
                quoz++;
            }
            printf("il quoziente è %d con resto %d\n", quoz, resto);
            
                
            
            

            
        
        
    }
	
  


	
	






