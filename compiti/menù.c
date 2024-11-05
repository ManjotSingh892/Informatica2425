#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int scelta;
    int n1;
    int n2;
    float risultato;

    srand(time(NULL));
    n1=rand()%50+1;
    n2=rand()%50+1;
    printf("numeri generati: %de %d\n", n1, n2);
    printf("seleziona l'operazione da eseguire:\n");
    printf("0. termina\n");
    printf("1. somma\n");
    printf("2. differenza\n");
    printf("3. moltiplicazione\n");
    printf("4. divisione\n");
    printf("inserisci la tua scelta: ");
    scanf("%d", &scelta);
     switch (scelta) {
        case 0:
            printf("Uscita dal programma.\n");
            break;
        case 1:
            risultato = n1 + n2;
            printf("Risultato della somma: %.2f\n", risultato);
            break;
        case 2:
            risultato = n1 - n2;
            printf("Risultato della differenza: %.2f\n", risultato);
            break;
        case 3:
            risultato = n1 * n2;
            printf("Risultato della moltiplicazione: %.2f\n", risultato);
            break;
        case 4:
            if (n2 != 0) {
                risultato = (float)n1 / n2;
                printf("Risultato della divisione: %.2f\n", risultato);
            } else {
                printf("Errore: divisione per zero non consentita.\n");
            }
            break;
        default:
            printf("Scelta non valida.\n");
            break;
    }
            printf("\ngli numeri generati sono %d e %d",n1, n2);







    return  0;
}