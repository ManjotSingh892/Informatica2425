#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <libreria.h>

float calcolamedia(int v[], int n) {
    float somma = 0;
    for (int i = 0; i < n; i++){
        somma= somma+v[i]; 
    }

    return somma/n;
}

int main() {
    int v[31];
    srand(time(NULL));
    for (int i = 0; i < 31; i++) {
        v[i] = rand() % 101;
        printf("%d ", v[i]);
    }
    printf("\nMedia: %f\n", calcolamedia(v, 31));
    return 0;
}
