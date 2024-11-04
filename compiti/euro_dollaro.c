#include <stdio.h>

int main() {
    const float tassoCambio = 1.23;
    float valore, conversione;
    int scelta;

    printf("Scegli il tipo di conversione:\n");
    printf("1. Da Dollari a Euro\n");
    printf("2. Da Euro a Dollari\n");
    printf("Inserisci 1 o 2: ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Inserisci l'importo in Dollari: ");
        scanf("%f", &valore);
        conversione = valore / tassoCambio;
        printf("L'importo in Euro è: %.2f\n", conversione);
    } else if (scelta == 2) {
        printf("Inserisci l'importo in Euro: ");
        scanf("%f", &valore);
        conversione = valore * tassoCambio;
        printf("L'importo in Dollari è: %.2f\n", conversione);
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}
