#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int voto1, voto2, scelta;
    srand(time(0));

    printf("Inserisci un voto compreso tra 2 e 10: ");
    scanf("%d", &voto1);

    if (voto1 < 2 || voto1 > 10) {
        printf("Voto non valido\n");
        return 1;
    }

    voto2 = rand() % 5 + 4;

    printf("Scegli un'operazione:\n");
    printf("1. Mostrare la media dei due voti\n");
    printf("2. Mostrare il voto maggiore tra i due\n");
    printf("3. Mostrare il voto minore tra i due\n");
    printf("4. Mostrare il numero di voti sufficienti tra i due\n");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1:
            printf("Media dei due voti: %.2f\n", (voto1 + voto2) / 2.0);
            break;
        case 2:
            if (voto1 > voto2) {
                printf("Voto maggiore: %d\n", voto1);
            } else {
                printf("Voto maggiore: %d\n", voto2);
            }
            break;
        case 3:
            if (voto1 < voto2) {
                printf("Voto minore: %d\n", voto1);
            } else {
                printf("Voto minore: %d\n", voto2);
            }
            break;
        case 4:
            printf("Numero di voti sufficienti: %d\n", (voto1 >= 6) + (voto2 >= 6));
            break;
        default:
            printf("Scelta non valida\n");
    }

    return 0;
}
