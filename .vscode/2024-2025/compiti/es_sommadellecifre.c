#include <stdio.h>

int main() {
    int sommadellecifre;
    int c1, c2, c3;
    int numero;

    printf("\nScrivi un numero: ");
    scanf("%d", &numero);

    if (numero > 999) {
        printf("\nIl numero è troppo grande.\n");
        return 0;
    }

    if (numero < 1) {
        printf("\nIl numero è troppo basso.\n");
        return 0;
    }

    c1 = numero / 100;
    c2 = (numero / 10) % 10;
    c3 = numero % 10;
    sommadellecifre = c1 + c2 + c3;

    if (sommadellecifre % 3 == 0) {
        printf("\nIl numero è divisibile per 3.\n");
    } else {
        printf("\nIl numero non è divisibile per 3.\n");
    }

    return 0;
}
