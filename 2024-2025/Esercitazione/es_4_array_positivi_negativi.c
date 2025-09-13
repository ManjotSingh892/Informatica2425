/*
3) DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI
*/

#include <stdio.h>

#define DIM 10

void CaricaArray(int a[]);
void StampaArray(int a[]);
int SommaPositiva(int a[]);
int SommaNegativa(int a[]);

int main() {
    int a[DIM];
    int media = 0;
    int Sp=0;
    int Sn=0;

    CaricaArray(a);
    StampaArray(a);
    Sp=SommaPositiva(a);
    Sn=SommaNegativa(a);
    printf("Somma positiva: %d\n Somma negativa: %d", Sp, Sn);

    return 0;
}

void CaricaArray(int a[]) {
    for (int i = 0; i < DIM; i++) {
        do {
            printf("Inserisci un valore\n");
            scanf("%d", &a[i]);
        } while (a[i] < 0);
    }
}

void StampaArray(int a[]) {
    for (int i = 0; i < DIM; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int SommaPositiva(int a[]){
    int sommapositiva=0;
    for(int i=0; i<DIM;i++){
        if(a[i]>=0){
            sommapositiva=sommapositiva+a[i];
        }
    }return sommapositiva;
}

int SommaNegativa(int a[]){
    int sommanegativa=0;
    for(int i=0; i<DIM;i++){
        if(a[i]<0){
            sommanegativa=sommanegativa+a[i];
        }
    }return sommanegativa;
}
