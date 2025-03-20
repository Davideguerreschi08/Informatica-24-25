/*vEsercizio:  */
	

# include <stdio.h>
	
	int main(){
        int a,b,q,r;
        int cnt=0;

        do{
            printf("inserisci il primo numero: ");
            scanf("%d", &a);
            printf("inserisci il secondo numero: ");
            scanf("%d", &b);
        }while(a<b);

        q=a;
        while(q>b && r!=0){
            if(q%b==0){
                r=q%b;
                cnt++;
                q=q/b;
            }
        }
    }
	
  


	
	






