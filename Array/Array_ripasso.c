/*
    Creiamo un menù di richieste 
    1)caricare un array;
    2)stampare l'array;
    3)ordina l'array tramite la tecnica del bubble sort;
*/

#include <stdio.h>
#include "libArray.c"



#define DIM 5

int main(){
    int vett[DIM];
    int scelta=0;


    do{
        printf("Menù");
        printf("\n1) Carica l'array");
        printf("\n2) Stampa l'array");
        printf("\n3) Ordina tramite il bubble sort");
        printf("\n4)Trovato il valore minimo e il valore all'interno dell'array scambiate di posizione");
        scanf("%d", &scelta);

        switch (scelta){
            case 1:{
                    caricaVett(vett, DIM);
                    break;
            }
            case 2:{
                    stampaVettore(vett,DIM,'-');
                    break;
            }
            case 3:{
                    caricaBubble(vett, DIM);
                    break;
            }
            case 4:{
                scambioMinMax(vett, DIM);
                stampaVettore(vett, DIM), '-';

            }
            default:
            break;
        }

    }while(scelta!=0);

}
