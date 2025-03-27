/**
 * funzione che stampa gli elementi di un vettore.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param char separatore tra un elemento e un altro 
 */
void stampaVettore(int vettore[], int dim, char sep);
/**
 * funzione che riempie un vettore con valori scelti dall'utente.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 */
void riempiVettore(int vettore[], int dim);
/**
 * funzione riempie un vettore con numeri casuali compresi tra un minimo e un massimo.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param int minimo valore minimo dei numeri casuali
 * @param int massimo valore dei numeri casuali
 */
void riempiVettoreCasuale(int vettore[], int dim, int minimo, int massimo);
/**
 * questa funzione restituisce il numero di volte in cui compare la variabile valore all'interno del vettore
 * @param int[]vettore in ingresso
 * @param int dimensione del vettore
 * @param int valore da ricercare
 * @return int numero di occorrenze
 */
int contaOccorrenze(int vettore[], int dim, int valore);

/**
 * questa funzione restituisce la posizione del primo elemento nell'array che ha valore uguale alla variabile valore, se non trova l'elemento restituisce -1
 * @param int* vettore in ingresso
 * @param int dimensione del vettore
 * @param int valore da ricercare
 * @return int posizione del primo elemento uguale a valore o -1 se non trovato
 */
int ricercaSequenziale(int *vettore, int dim, int valore);


/**
 * questa funzione restituisce la posizione del primo elemento in un array ORDINATO in ordine crescente che ha valore uguale alla variabile valore, se non trova l'elemento restituisce -1
 * @param int[]vettore in ingresso
 * @param int dimensione del vettore
 * @param int indice dell'elemento da cui parte la ricerca
 * @param int indice dell'elemento a cui arriva la ricerca
 * @param int valore da ricercare
 * @return int posizione del primo elemento uguale a valore o -1 se non trovato
 */
int ricercaBinaria(int array[], int dim, int estInf, int estSup, int valore);

/**
 * Funzione che riempie un vettore di dimensione dim con numeri casuali in ordine crescente
 */
void riempiVettoreOrdinatoCasuale(int vett[], int dim, int minimo, int massimo);

/*fuzione che sposta verso Dx gli elementi del vettore */
void shiftDx (int vett[], int dim, int pos);

/*funzione che ritorna alla posizione del numero all' interno di un vettore ordinato*/
int trovaPosizione (int vett[], int dim, int num);

/*funzione che scambia il valore di due vettori*/
void scambiaVettore (int v1[], int v2[], int temp); 

