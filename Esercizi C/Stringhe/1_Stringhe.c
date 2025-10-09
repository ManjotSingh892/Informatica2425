/*
Scrivi un programma in C che gestisca un insieme di numeri interi 
usando un array dinamico.
Il programma deve permettere, tramite menù:
1. Aggiungereun numero (espandendo l'array con realloc)
2. Visualizzare tutti i numeri
3. Cercare un numero specifico
4. Ordinare i numeri in ordine crescente
5. Eliminare un numero scelto
6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* Aggiungi(int *vettore, int n){
    int nuova_dim;
    do{
        printf("\nInserisci la nuova dimensione\n");
        scanf("%d", &dim);
    }while(dim<n);
    *vettore = (int*)realloc(*vettore, nuova_dim * sizeof(int));
}

int main(){
    int *vettore=NULL;
    int *n=1;
}