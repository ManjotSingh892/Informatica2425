/*
Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>

int *array = NULL;
int dim = 0;

void realloc_array();
void mostra();
void cerca();
void ordinamento();
void elimina();

void menu() {
    int n = 0;
    do {
        printf("\nMenu:\n1. Aggiungere un numero (espandendo l’array con realloc)\n2. Visualizzare tutti i numeri\n3. Cercare un numero specifico\n4. Ordinare i numeri in ordine crescente\n5. Eliminare un numero scelto\n6. Uscire\nScelta: ");
        scanf("%d", &n);

        switch (n) {
        case 1:
            realloc_array();
            break;
        case 2:
            mostra();
            break;
        case 3:
            cerca();
            break;
        case 4:
            ordinamento();
            break;
        case 5:
            elimina();
            break;
        case 6:
            return;
        default:
            break;
        }
    } while (n >= 1 && n <= 6 && n != 6);
}

void realloc_array() {
    int val = 0;
    printf("Inserisci un numero nel array\n");
    scanf("%d", &val);
    array = (int *)realloc(array, (dim + 1) * sizeof(int));
    if (array == NULL) {
        return;
    }
    array[dim] = val;
    dim++;
}

void mostra() {
    for (int i = 0; i < dim; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void cerca() {
    int cerca = 0;
    printf("Inserisci il numero che desideri cercare\n");
    scanf("%d", &cerca);

    for (int i = 0; i < dim; i++) {
        if (array[i] == cerca) {
            printf("Il numero cercato esiste e si trova nella posizione %d\n", i);
            return;
        }
    }
}

void ordinamento() {
    int temp = 0;
    for (int cnt = 0; cnt <= dim * dim; cnt++) {
        for (int i = 0; i < dim - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void elimina() {
    int elimina = 0;
    printf("Inserisci il numero che desideri eliminare\n");
    scanf("%d", &elimina);

    for (int i = 0; i < dim; i++) {
        if (array[i] == elimina) {
            printf("Il numero  esiste e si trova nella posizione %d\n", i);
            printf("Il numero da eliminare è stato eliminato\n");
            array[i] = 0;
            return;
        }
    }
}

int main() {
    menu();
    free(array);
    return 0;
}
