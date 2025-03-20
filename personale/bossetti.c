#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definizione delle strutture dati
typedef struct {
    char nome[50];
    int risorse;
    int territori;
} Giocatore;

typedef struct {
    char nome[50];
    int risorse;
    int e_occupato;  // 0 per vuoto, 1 per occupato
} Territorio;

// Funzioni
void iniziaPartita(Giocatore* giocatori, int numGiocatori, Territorio* mappa, int numTerritori);
void mostraMappa(Territorio* mappa, int numTerritori);
void mostraGiocatori(Giocatore* giocatori, int numGiocatori);
void giocaTurno(Giocatore* giocatori, int numGiocatori, Territorio* mappa, int numTerritori);
void acquisisciTerritorio(Giocatore* giocatore, Territorio* mappa, int numTerritori, int indiceTerritorio);

// Funzione principale
int main() {
    int numGiocatori = 2;
    int numTerritori = 5;

    // Creazione dei giocatori
    Giocatore giocatori[numGiocatori];
    strcpy(giocatori[0].nome, "Giocatore 1");
    giocatori[0].risorse = 100;
    giocatori[0].territori = 0;

    strcpy(giocatori[1].nome, "Giocatore 2");
    giocatori[1].risorse = 100;
    giocatori[1].territori = 0;

    // Creazione della mappa
    Territorio mappa[numTerritori];
    for (int i = 0; i < numTerritori; i++) {
        sprintf(mappa[i].nome, "Territorio %d", i + 1);
        mappa[i].risorse = 50;
        mappa[i].e_occupato = 0;  // Territorio vuoto inizialmente
    }

    // Inizia il gioco
    iniziaPartita(giocatori, numGiocatori, mappa, numTerritori);

    return 0;
}

void iniziaPartita(Giocatore* giocatori, int numGiocatori, Territorio* mappa, int numTerritori) {
    int turno = 0;
    while (1) {
        printf("\n--- Turno %d ---\n", turno + 1);
        giocaTurno(giocatori, numGiocatori, mappa, numTerritori);
        turno++;
        if (turno >= 5) {
            printf("\nLa partita è finita dopo 5 turni!\n");
            break;
        }
    }
}

void mostraMappa(Territorio* mappa, int numTerritori) {
    printf("\nMappa:\n");
    for (int i = 0; i < numTerritori; i++) {
        printf("%s - Risorse: %d, Occupato: %s\n", mappa[i].nome, mappa[i].risorse, mappa[i].e_occupato ? "Sì" : "No");
    }
}

void mostraGiocatori(Giocatore* giocatori, int numGiocatori) {
    printf("\nGiocatori:\n");
    for (int i = 0; i < numGiocatori; i++) {
        printf("%s - Risorse: %d, Territori: %d\n", giocatori[i].nome, giocatori[i].risorse, giocatori[i].territori);
    }
}

void giocaTurno(Giocatore* giocatori, int numGiocatori, Territorio* mappa, int numTerritori) {
    for (int i = 0; i < numGiocatori; i++) {
        printf("\nTurno di %s:\n", giocatori[i].nome);
        mostraMappa(mappa, numTerritori);
        mostraGiocatori(giocatori, numGiocatori);

        printf("Scegli un territorio da acquisire (0 per uscire): ");
        int scelta;
        scanf("%d", &scelta);

        if (scelta == 0) break;

        if (scelta > 0 && scelta <= numTerritori && mappa[scelta - 1].e_occupato == 0 && giocatori[i].risorse >= 10) {
            acquisisciTerritorio(&giocatori[i], mappa, numTerritori, scelta - 1);
        } else {
            printf("Scelta non valida.\n");
        }
    }
}

void acquisisciTerritorio(Giocatore* giocatore, Territorio* mappa, int numTerritori, int indiceTerritorio) {
    if (mappa[indiceTerritorio].e_occupato == 0 && giocatore->risorse >= 10) {
        mappa[indiceTerritorio].e_occupato = 1;
        giocatore->territori++;
        giocatore->risorse -= 10;
        printf("%s ha acquisito %s! Risorse rimanenti: %d\n", giocatore->nome, mappa[indiceTerritorio].nome, giocatore->risorse);
    } else {
        printf("Non hai abbastanza risorse o il territorio è già occupato.\n");
    }
}
