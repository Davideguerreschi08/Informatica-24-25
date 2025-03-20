/*Esercizio:  */
	

# include <stdio.h>
	
	int main(){
        int scelta, min_max, num;
        int cnt=0;

        printf("scegli se la sequenza deve essere: ");
        printf("1. crescente");
        printf("2. decrescente");
        scanf("%d", &scelta);

        printf("inserisci il valore");
        scanf("%d", &num);
        min_max=num;
        while (num!=0){
            cnt++;
            switch(scelta){
                case 1:{
                    if(num>=min_max){
                        min_max=num;
                        printf("%d\n", min_max);
                    }
                    break;
                }
                  case 2:{
                    if(num<=min_max){
                        min_max=num;
                        printf("%d", min_max);

                    }
                    break;
                  }
                    default:{
                        printf("non hai inserito la scelta giusta");
                        printf("\n inserisci un nuovo valore: ");
                        scanf("%d", num);
                    }
            }
              

                
        }
        

    }
	
  


	
	






