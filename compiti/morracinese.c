#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sceltaUtente, sceltaComputer;
    srand(time(NULL));
    sceltaComputer = rand() % 3 + 1;
    printf("Scegli:\n");
    printf("1. Sasso\n");
    printf("2. Carta\n");
    printf("3. Forbice\n");
    printf("Inserisci il numero corrispondente alla tua scelta: ");
    scanf("%d", &sceltaUtente);
    printf("Il computer ha scelto: ");
    if (sceltaComputer == 1) {
        printf("Sasso\n");
    } else if (sceltaComputer == 2) {
        printf("Carta\n");
    } else {
        printf("Forbice\n");
    }

    if (sceltaUtente == sceltaComputer) {
        printf("È un pareggio!\n");
    } else if ((sceltaUtente==1&&sceltaComputer==3)||(sceltaUtente==2&&sceltaComputer==1)||(sceltaUtente==3 &sceltaComputer==2))
    {
        printf("Hai vinto!\n");
    } else {
        printf("Hai perso!\n");
    }
    
    return 0;
}
