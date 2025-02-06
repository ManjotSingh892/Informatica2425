/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
const float pi = 3.14;

void circonferenza(int r, float *circonferenza);
void areacerchio(int r, float *area);

int main() {
    int r = 0;
    float area = 0;
    float circonferenza = 0;

    do {
        printf("Inserisci un valore da dare al raggio\n");
        scanf("%d", &r);
    } while (r <= 0);

    areacerchio(r, &area);
    printf("Area: %.2f\n", area);

    circonferenza(r, &circonferenza);
    printf("Circonferenza: %.2f\n", circonferenza);

    return 0;
}

void circonferenza(int r, float *circonferenza) {
    *circonferenza = 2 * pi * r;
}

void areacerchio(int r, float *area) {
    *area = pi * (r * r);
}
