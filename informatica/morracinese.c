
/* Esercizio: Gioco
della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere
all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.*/
	
	


# include <stdio.h>
# include <stdlib.h>
# include <time.h>
	
	int main(){
	
		srand(time(NULL));
		int sceltautente, sceltacomputer;

		sceltacomputer= rand()%3+1;
		printf("scegli tra 1=sasso 2=carta 3=forbice");
		scanf("%d", &sceltautente);

		if(sceltautente=1 || sceltautente=2 ||sceltautente=3){
			if(sceltacomputer=sceltautente){
				printf("PAREGGIO");
			else if (sceltautente==1 && sceltacomputer==3)
			printf("hai vinto");
			else if (sceltautente==2 && sceltacomputer==1)
			printf("hai vinto");
			else if (sceltautente==3 && sceltacomputer==2)
			printf("hai vinto");
			
			}else{
				printf("ha vinto il computer");
			}
			
			
			
			}
		}else{
			printf("scelta non valida");
		}


}


