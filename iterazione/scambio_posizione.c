/*Esercizio: dati due numeri a più cifre (stesso numero di cifre) scambiare tra loro
le cifre di posizione pari  */
	

# include <stdio.h>
# include <math.h>

	int main(){
    int n1, p_pari1;
    int p_pari2;
    int n2;
    int c1;
    int c2;
    int cnt_c1=0;
    int cnt_c2=0;
    int numero_i1;
    int numero_i2;


    do{
        printf("inserisci due valori a più cifre: ");
        scanf("%d", &n1);
        scanf("%d", &n2);

       c1=n1;
       c2=n2;
        
        while(c1!=0){
            c1=c1/10;
            cnt_c1++;
        }
         while(c2!=0){
             c2=c2/10;
             cnt_c2++;
         }
    }while(cnt_c1!=cnt_c2);

        while(n1!=0 && n2!=0){
            c1=n1/10;
            c1=n1%10;
            p_pari1++;
             c2=n2/10;
            c2=n2%10;
            p_pari2++;
        
            if(p_pari1%2==0){
                numero_i2+=c1*pow(10, p_pari1-1);
            }else{
            numero_i2+=c1*pow(10, p_pari1-1);
            }
             if(p_pari2%2==0){
                numero_i1+=c2*pow(10, p_pari2-1);
             }else
             numero_i1+=c2*pow(10, p_pari2-1);
            }
            printf("%d e %d diventano %d e %d", n1, n2,numero_i1, numero_i2);
        }
         
        











   
    



    
	
  


	
	






