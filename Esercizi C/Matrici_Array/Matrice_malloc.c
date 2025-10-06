/*
Creare un array dinamico chiedendo all'utente la sua dimensione
Il programma deve prevedere le seguenti funzioni:
1. Crea L'array 
2. Inserisce gli elementi nell'array
3. Stampa dei valori
4. Esci
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

int main(){
    int *vettore=NULL; //puntatore al vettore
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