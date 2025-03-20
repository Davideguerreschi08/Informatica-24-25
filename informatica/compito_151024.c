
/* Esercizio: data recente
	
	*/


# include <stdio.h>
	
	int main(){
	  int mese;
    int giorno;
    printf("Inserisci il giorno\n");
    scanf("%d", &giorno);
    printf("Inserisci il mese\n");
    scanf("%d", &mese);


    if (mese>=3&&mese<=6)
        if(giorno>20||giorno<23)
            printf("La data è in primavera\n");


    if (mese>=6&&mese<=9)
        if(giorno>22||giorno<23)
            printf("La data è in estate\n");


     if (mese>=9&&mese<=12)
        if(giorno>22||giorno<22)
            printf("La data è in autunno\n");


    if (mese>=12&&mese<=3)
        if(giorno>21||giorno<21)
            printf("La data è in inverno\n");
   
    if(mese>12||mese<1||giorno>31||giorno<1)
        printf("La data non è controllabile\n");


        return 0;
}

}

