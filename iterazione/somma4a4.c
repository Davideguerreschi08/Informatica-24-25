/*vEsercizio: dati n numeri, sommarli 4 a 4
 terminare appena si introduce lo 0*/
	

# include <stdio.h>
	
	int main(){
    int n=0, somma=0;
    int cnt=0;
      do{
        if(cnt%4==0 && cnt!=0){
           printf("la somma è %d", somma);
           somma=0;
        }
            printf("\ninserisci un numero: ");
            scanf("%d", &n);
             somma+=n;
             cnt++;
         }while(n!=0);  
         printf("hai inserito 0 fine"); 
        
     
      
       


        




        
            
        
    }
	
  


	
	






