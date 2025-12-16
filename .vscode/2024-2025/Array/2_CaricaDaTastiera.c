/*COSTRUIRE UN VETTORE DI N ELEMENTI
CON VALORI LETTI DA TASTIERA*/
#include <stdio.h>
#include <time.h>
#include <libArray.h>
#include "libArray.c"
#define DIM 4
void caricaCasuale(int vett[], int dim, int min, int max)
int main(){
    srand(time(NULL));
        int vett1[DIM]={0};
        int vett2[DIM]={0};

        caricaCasuale(vett1, DIM, 10, 50);
        caricaCasuale(vett2, DIM, 10, 50);
        printf("\n");
        stampaVett(vett1, DIM, '-');
        scambioVettori(vett1, vett2, DIM);            
        stampaVett(vett2, DIM, '-');
        printf("\n");
        stampaVett(vett2, DIM, '-');


    return 0;
}