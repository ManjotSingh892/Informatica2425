#include <stdio.h>

#define DIM 10

void InserisciVal(int a[], int val);

int main() {
    int val = 0;
    int a[DIM + 1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  

    printf("Inserisci il valore che vuoi mettere dentro all'array ordinato\n");
    scanf("%d", &val);

    InserisciVal(a, val);

    return 0;
}

void InserisciVal(int a[], int val) {
    int i, j;

    for (i = 0; i < DIM; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (i = 0; i < DIM; i++) {
        if (val < a[i]) {
            break;
        }
    }

    for (j = DIM; j > i; j--) {
        a[j] = a[j - 1];
    }

    a[i] = val;

    for (i = 0; i <= DIM; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
