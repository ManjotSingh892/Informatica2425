#include <stdio.h>
#include <stdlib.h>

int Richiesta_Num_Studenti() {
    int n = 0;
    do {
        printf("Inserisci il numero degli studenti da salvare (1–10): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);
    return n;
}

int* Allocazione_Iniziale(int dimensione) {
    int *voti = (int *) malloc(dimensione * sizeof(int));
    if (voti == NULL) {
        printf("Errore di allocazione, il programma termina.\n");
        exit(1);
    }
    return voti;
}

int* Espandi_Array(int *voti, int nuova_dimensione) {
    int *temp = (int *) realloc(voti, nuova_dimensione * sizeof(int));
    if (temp == NULL) {
        printf("Errore nella riallocazione della memoria.\n");
        free(voti);
        exit(1);
    }
    return temp;
}

int Inserisci_Voti(int **voti, int dimensione) {
    int voto = 0;
    int flag = 1;
    int count = 0;

    while (flag == 1) {
        if (count == dimensione) {
            dimensione *= 2;
            *voti = Espandi_Array(*voti, dimensione);
        }

        do {
            printf("Inserisci il voto dello studente (0–30): ");
            scanf("%d", &voto);
        } while (voto < 0 || voto > 30);

        (*voti)[count++] = voto;

        do {
            printf("Vuoi continuare ad inserire voti? (Si: 1 / No: 0): ");
            scanf("%d", &flag);
        } while (flag != 0 && flag != 1);
    }

    return count;
}

float Calcola_Media(int *voti, int count) {
    int somma = 0;
    for (int i = 0; i < count; i++) {
        somma += voti[i];
    }
    return (float)somma / count;
}

int main() {
    int *Voti;
    int Studenti = Richiesta_Num_Studenti();

    Voti = Allocazione_Iniziale(Studenti);

    int Studenti_Con_Valutazione = Inserisci_Voti(&Voti, Studenti);

    float media = Calcola_Media(Voti, Studenti_Con_Valutazione);
    printf("La media dei voti è: %.2f\n", media);

    free(Voti);
    return 0;
}
