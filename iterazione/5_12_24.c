/*Esercizio: calcolare il quaziente fra 2 numeri applicando il
 metodo delle sottrazioni successive*/
 
	

# include <stdio.h>
	
	int main(){
        int n=0;
        int n2=0;
        int quoziente=0;
        int resto=0, temp=0
       
       do{
            printf("inserisci due numeri: ");
            scanf("%d", &n);
            scanf("%d", &n2);
       }while(n<=0 || n2<=0);
          if(n<n2){
            temp=n;
            n=n2;
            n2=temp

         }
           resto=n;
           while (resto>=n2){
           
            resto-=n2;
            quoziente++;

           }
            printf("il quoziente è: %d", resto);

           

          
     }
       
           



           

	
	






