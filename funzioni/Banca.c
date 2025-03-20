/*Esercizio:  */
	

 

#include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 // Funzione per depositare denaro
void deposita(float *_saldo, float _importo);

// Funzione per prelevare denaro 
void preleva(float *_saldo, float _importo);

// Funzione per visualizzare il saldo con un numero di decimali a scelta tra 0, 1 e 2
void mostra_saldo(float _saldo, int _decimali);

// Funzione per visualizzare il menù
void mostra_menu();

int main(){
    
    float saldo=0, importo;
    int scelta = -1;
    int dec;
    while(scelta != 0) {
        mostra_menu();
        printf("Scegli quale operazione vuoi fare: ");
        scanf("%d", &scelta);
        switch(scelta) {
            case 1:
                printf("Quale cifra vuoi depositare? ");
                scanf("%f", &importo);
                
                deposita(&saldo, importo);
                break;
            case 2:
                printf("Quale cifra vuoi prelevare? ");
                scanf("%f", &importo);
                
                preleva(&saldo, importo);
                break;
            case 3:
                printf("Quanti decimali vuoi mostrare nel tuo saldo? ");
                scanf("%d", &dec);
                
                mostra_saldo(saldo, dec);
                break;
            case 4:
                printf("Il programma si sta per chiudere....");
                break;
            default:
                printf("Scelta non valida!!!");
                break;
        }
    }

}

void deposita(float *_saldo, float _importo){
    *_saldo+=_importo;
}

// Funzione per prelevare denaro 
void preleva(float *_saldo, float _importo){
    if(_importo<=*_saldo){
        *_saldo-=_importo;
    }else
    printf("Non hai abbastanza denaro\n: ");
        
        
}
void mostra_saldo(float _saldo, int _decimali){
    switch (_decimali)
    {
    case 0:
        printf("Il tuo saldo è %.0f\n", _saldo);
        break;
    
    case 1:
        printf("Il tuo saldo è %.1f\n", _saldo);
        break;
    
    default:
        printf("Il tuo saldo è %.2f\n", _saldo);
        break;
    }
}
void mostra_menu(){
    sleep(2);
    system("clear");
    printf("Menù della banca d' Italia\n");
    printf("1.Deposta soldi sul tuo conto\n");
    printf("2.Preleva soldi\n");
    printf("3.Mostra saldo\n");
    printf("0.Esci dal programma\n");
}




