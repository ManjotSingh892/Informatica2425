/*Un
grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:-  reparto
   1 = nessuno sconto -  reparto
   2 = sconto 3%-  reparto
   3 = sconto 2%-  reparto
   4 = sconto 5%
Dati
reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/
#include <stdio.h>

int main() {
    int reparto;
    float prezzo, sconto;

    printf("Inserisci il numero del reparto (1-4): ");
    scanf("%d", &reparto);
    printf("Inserisci il prezzo del prodotto: ");
    scanf("%f", &prezzo);

    if (reparto == 2) sconto = 0.03;
    if (reparto == 3) sconto = 0.02;
    if (reparto == 4) sconto = 0.05;

    prezzo = prezzo * (1 - sconto);
    printf("Il prezzo scontato è: %f\n", prezzo);

    return 0;
}

