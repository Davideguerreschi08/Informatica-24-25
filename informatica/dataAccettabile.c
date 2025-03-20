
/* Esercizio: data una data in formato gg mm aaaa
	verificare se la data è accettabile*/


# include <stdio.h>
	
	int main(){
		
	int gg;
	int mm;
	int aaaa;
	int bisestile;

// richiesta degli input
	printf("inserisci il giorno: ");
	scanf("%d", &gg);
	printf("inserisci il mese: ");
	scanf("%d", &gg);
	printf("inserisci l' anno: ");
	scanf("%d", &aaaa);

// controllo
// un anno è bisestile se è multiplo di 4 ma non di 100 opppure multiplo di 400
	if(aaaa%100==0){
		if(aaaa%400==0){
			printf("l' anno è bisestile");
			bisestile=1;
		}
	}
	else{
		if (aaaa%4==0){ 
			printf(" l' anno è bisestile");
			bisestile=1;
		} 
	}
	// controllo del mese e del giorno
	if(mm>=1 && mm <=12){
		if(mm==2){
			if(gg>=1 && gg<=28+bisestile){
				printf("/nla data è accettabile");
			}
			
			}
		}
		 else{
			if( mm==11 || mm=4 || mm==6 || mm==9){
				if(gg>=1 && gg<=30){
					printf("\nla data è accettabile");
				}
				else{
				printf("/nla data non è accettabile");
			}
			else{
				if(gg>=1 && gg<=31){
					printf("\nla data è accettabile");
				}
					printf("/nla data non è accettabile");
			}

		 }
		}
		
	}
 }

