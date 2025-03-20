/*Esercizio:GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.  */
	

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
	int main(){
    int anno=0;
    int mese=0;
    int giorno=0;
    int data_consegna=0;
    int bisestile=0;
    srand(time(NULL));
    anno=rand()%25+2000;
    printf("l' anno inserito è: %d", anno);
    mese=rand()%13;
    printf("il mese inserito è: %d", mese);
    giorno=rand()%32;
    printf("il giorno inserito è: %d", giorno);
    
     if (mese>=1 && mese <=12){
        if (mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("\nLa  data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if( mese==11 || mese==4 || mese==6 || mese==9){
                if (giorno>=1 && giorno<=30){
                    printf("\nLa prima data è accettabile");
                }
                else{
                    printf("\nLa  data non è accettabile");
                }
            }
            else{
                if (giorno>=1 && giorno<=31){
                    printf("\nLa prima data è accettabile");
                }
                else{
                    printf("\nLa  data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa  data non è accettabile");
    }
   
    bisestile=0;
    
    
    }
  


	
	






