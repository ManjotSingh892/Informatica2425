#include <stdio.h>
#include <math.h>

void equazione(float *a, float *b, float *c);
void calcola_delta(float a, float b, float c, float *delta, float *x1, float *x2);

int main() {
    float a, b, c, delta, x1, x2;

    equazione(&a, &b, &c);
    calcola_delta(a, b, c, &delta, &x1, &x2);

    return 0;
}

void equazione(float *a, float *b, float *c) {
    do {
        printf("Inserisci un valore per A:\n");
        scanf("%f", a);
        printf("Inserisci un valore per B:\n");
        scanf("%f", b);
        printf("Inserisci un valore per C:\n");
        scanf("%f", c);
    } while (*a == 0 && *b == 0 && *c == 0);
}

void calcola_delta(float a, float b, float c, float *delta, float *x1, float *x2) {
    *delta = (b * b) - 4 * a * c;
    printf("Delta: %.2f\n", *delta);

    *x1 = (-b + sqrt(*delta)) / (2 * a);
    *x2 = (-b - sqrt(*delta)) / (2 * a);

    printf("X1: %.2f\n", *x1);
    printf("X2: %.2f\n", *x2);
}
