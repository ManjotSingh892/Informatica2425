//) Calcola il costo sostenuto dalla scolaresca per andare a teatro sapendo che il biglietto ordinario costa 12 euro, i 2 docenti accompagnatori hanno lo sconto del 50% e che il numero degli alunni deve essere letto in INPUT//
#include <stdio.h>
    int main(){
        int costobiglietto;
        costobiglietto=12;
        int costodocenti;
        int costototale;
        costodocenti=12*2/2;
        int numeroalunni;
        printf("Scrivi il numero degli alunni");
        scanf("%d",numeroalunni);
        costototale=(costobiglietto*numeroalunni+costodocenti);
        printf("Il costo totale è:",costototale);
        return 0






    }