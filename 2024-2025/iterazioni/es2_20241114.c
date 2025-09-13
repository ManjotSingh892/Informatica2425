/*
    Leggere una sequenza di numeri, visualizzarla.
    Si termina non appena arriva uno zero
*/
#include <stdio.h>
    int main(){
        int n1;

        while(n1!=0){
            printf("Inserisci un numero:\n");
            scanf("%d", &n1);
            printf("Il  valore inserito è: %d\n", n1);
            printf("Inserisci un numero:\n");
            scanf("%d", &n1);

        }
            printf("Il programma ha letto 0");

        return 0;
    }