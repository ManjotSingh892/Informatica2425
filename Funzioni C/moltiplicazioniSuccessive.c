/*Esercizio 1
Scrivete una funzione avente due parametri interi(passati per valore) b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>

int moltsucc(int *b, int *e);

int main() {
    int b = 0;
    int e = 0;
    int risultato = 0;

    do {
        printf("Inserisci valore per: b\n");
        scanf("%d", &b);

        printf("Inserisci valore per: e\n");
        scanf("%d", &e);            
    } while (b <= 0 || e <= 0);

    risultato = moltsucc(&b, &e);
    printf("Risultato: %d\n", risultato);

    return 0;
}

int moltsucc(int *b, int *e) {
    int i;
    int risultato = 1;

    for (i = 1; i <= *e; i++) {
        risultato = risultato * (*b);
    }

    return risultato;
}
