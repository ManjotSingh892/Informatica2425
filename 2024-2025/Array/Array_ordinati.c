#include <stdio.h>  // Libreria per input/output
#include <stdlib.h> // Libreria per funzioni generiche (es. allocazione di memoria, numeri casuali)
#include <time.h>   // Libreria per la gestione del tempo (usata per misurare il tempo di esecuzione)

// Inclusione di librerie personalizzate (libArray.h e libArray.c)
#include "libArray.h"  
#include "libArray.c"  

#define DIM 100000  // Definizione della dimensione del vettore (100.000)

int main() {  // Funzione principale
    int num = 0;          // Variabile per memorizzare un numero (non utilizzata direttamente)
    int vett[DIM];        // Dichiarazione del vettore di interi con dimensione predefinita
    int pos = 0;          // Variabile per memorizzare la posizione di un elemento (non usata direttamente)
    double start, end;    // Variabili per misurare il tempo di inizio e fine di un'operazione
    double elapsed_time;  // Variabile per calcolare il tempo trascorso

    // Riempie il vettore con numeri ordinati casuali tra 0 e 100
    riempiVettoreOrdinatoCasuale(vett, DIM, 0, 100); 

    // Per stampare il vettore (non attivato nel codice attuale)
    // stampaVettore(vett, DIM, '\t');  

    // --- Ricerca binaria ---
    start = (double)clock();  // Memorizza il tempo di inizio
    int trovato = ricercaBinaria(vett, DIM, 0, DIM - 1, 101); // Cerca il numero 101 nel vettore
    end = (double)clock();    // Memorizza il tempo di fine
    elapsed_time = ((double)(end - start));  // Calcola il tempo trascorso per la ricerca binaria

    // Stampa il tempo di esecuzione per la ricerca binaria
    printf("Tempo di esecuzione: %.2f ms\n", elapsed_time);

    // Verifica se il numero è stato trovato e stampa il risultato
    if (trovato == -1) {
        printf("\nl'elemento cercato non esiste nel vettore\n");  // Elemento non trovato
    } else {
        printf("\nl'elemento trovato è in posizione %d: %d\n", trovato, vett[trovato]);  // Elemento trovato
    }

    // --- Ricerca sequenziale ---
    start = (double)clock();  // Memorizza il tempo di inizio
    trovato = ricercaSequenziale(vett, DIM, 101);  // Cerca il numero 101 nel vettore
    end = (double)clock();    // Memorizza il tempo di fine
    elapsed_time = ((double)(end - start));  // Calcola il tempo trascorso per la ricerca sequenziale

    // Stampa il tempo di esecuzione per la ricerca sequenziale
    printf("Tempo di esecuzione: %.2f ms\n", elapsed_time);

    // Verifica se il numero è stato trovato e stampa il risultato
    if (trovato == -1) {
        printf("\nl'elemento cercato non esiste nel vettore\n");  // Elemento non trovato
    } else {
        printf("\nl'elemento trovato è in posizione %d: %d\n", trovato, vett[trovato]);  // Elemento trovato
    }
}
