/*

Scrivi un programma in C che:
    1. Chiede all'utente quanti numeri interi vuole inserire;
    2. Alloca dinamicamente un array di quella dimensione con malloc();
    3. Permette all'utente di inserire i numeri;
    4. Chiede all'utente se vuole aumentare la dimensione dell'Array,
        - Se sì, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
        - Permette quindi di insirire i nuovi valori negli spazi aggiunti;
    5. Infine, stampa tutti gli elementi dell'array;
*/

#include <stdio.h>
#include <stdlib.h>

int richiesta() {
    int n;
    do {
        printf("Quanti numeri vuoi inserire: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Numero nn valido, riprova\n");
    } while (n <= 0);
    return n
}

int* creaVett(int n) {
    int *vettore = (int*)malloc(n * sizeof(int));
    if (vettore == NULL) {
        printf("Errore allocazione memoria\n");
        exit(1);
    }
    return vettore;
}

void inserisciValori(int *vettore, int n) {
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }
}

void stampaVett(int *vettore, int n) {
    printf("\nArray finale:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

int aumentaDimensione(int **vettore, int n) {
    int scelta;
    do {
        printf("\nVuoi aumentare la dimensione? (1 = Si, 0 = No): ");
        scanf("%d", &scelta);
    } while (scelta != 0 && scelta != 1);

    if (scelta == 0) {
        printf("Ok,nessun nuovo elemento\n");
        return n;
    }

    int nuova_dim;
    printf("Nuova dimensione: ");
    scanf("%d", &nuova_dim);

    if (nuova_dim <= n) {
        printf("La nuova dimensione è minore della prima\n");
        exit(0);
    }

    *vettore = (int*)realloc(*vettore, nuova_dim * sizeof(int));
    if (*vettore == NULL) {
        printf("Errore reallocamento\n");
        exit(1);
    }

    printf("Inserisci i nuovi valori:\n");
    for (int i = n; i < nuova_dim; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &(*vettore)[i]);
    }

    return nuova_dim;
}

int main() {
    int n = richiesta();
    int *vettore = creaVett(n);
    inserisciValori(vettore, n);
    n = aumentaDimensione(&vettore, n);
    stampaVett(vettore, n);
    free(vettore);
    return 0;
}
