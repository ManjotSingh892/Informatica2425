/*
    Leggere una sequenza di numeri, visualizzarla e determinarte quanti
    numeri sono stati inseriti. Termina non appena arriva uno 0
*/
#include <stdio.h>
    int main(){
        int n1;
        int counter=0;

        printf("Inserisci un numero: ");
        scanf("%d", &n1);

        while(n1!=0){
            printf("Inserisci un numero:\n");
            scanf("%d", &n1);
            counter++;
            printf("Il  valore inserito è: %d\n", n1);
        }
            printf("Hai inserito %d valori", counter);
        return 0;
    }

