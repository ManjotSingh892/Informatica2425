/*
Scrivere un programma in linguaggio C che:
    1. Allochi dinamicamente un array iniziale di N numeri
    2. Inserimento dei valori
    3. Stampa array
    4. Calcoli la somma degli elementi multipli di 3
    5. Creiamo un nuovo array contenente solo valori dispari
*/

#include <stdio.h>
#include <stdlib.h>
int* creaVett(int _n){

    int *_vettore=(int*)malloc(_n *sizeof(int));
    if(_vettore==NULL){
        printf("Errore di allocazione\n");
        return 1;
    }
    return _vettore;
}

int * inserisciValori(int *_vettore, int _n){

    for(int i=0, i_<n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){

    printf("Hai inserito i seguenti elementi: ");

    for(int i=0; i<_n; i++){
        printf("%d", array[i]);
    }
    printf("\n")
}

void sommaMultipli(){
    int *nuovoArray=NULL;
    int somma=0;
    for(int i=0; i<_n; i++){
        int cnt=0;
        if(*vettore[i]%3==0){
            somma=somma+ *vettore[i];
            *nuovoArray=(int *)realloc(nuovoArray, cnt*sizeof(int));
            *nuovoArray= *vettore[i];
        }
    }
}


int main(){
    int *vettore=NULL; //puntatore al vettore
    int *nuovoArray=NULL;
    int n;
    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d, &n");
    }while(n<0);

    vettore= creaVett(n);
    vettore= inserisciValori(vettore, n);
    stampaVett(vettore, n);
    

    free(vettore);
}