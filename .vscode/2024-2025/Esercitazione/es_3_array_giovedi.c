#include <stdio.h>

#define DIM 10

void CaricaArray(int a[]);
void StampaArray(int a[]);
int MediaVoti(int a[]);

int main() {
    int a[DIM];
    int media = 0;

    CaricaArray(a);
    StampaArray(a);
    media = MediaVoti(a);

    printf("Media: %d", media);

    return 0;
}

void CaricaArray(int a[]) {
    for (int i = 0; i < DIM; i++) {
        do {
            printf("Inserisci un valore\n");
            scanf("%d", &a[i]);
        } while (a[i] < 0);
    }
}

void StampaArray(int a[]) {
    for (int i = 0; i < DIM; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int MediaVoti(int a[]) {
    int somma = 0;
    for (int i = 0; i < DIM; i++) {
        somma += a[i];
    }
    return somma / DIM;
}
