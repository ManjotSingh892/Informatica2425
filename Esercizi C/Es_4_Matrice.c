/* Esempio di malloc e realloc insieme
    Scrivere un programma in linguaggio C che:
    1. Allochi dinamicamente un array iniziale di n numeri interi con malloc;
    2. inserimento dei valori;
    3. stampi l'array;
    4. calcoli la somma dei valori multipli di 3;
    5. creiamo un nuovo array con solo i numeri dispari
*/
#include <stdio.h>
#include <stdlib.h>
int* creaVett(int _n){

    int *_vettore=(int*)malloc(_n *sizeof(int));
    if(_vettore==NULL){
        printf("Errore di allocazione\n");
        exit(1);
    }
    return _vettore;
}
int* inserisciValori(int *_vettore, int _n){

    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}
void stampaVett(int *_vettore, int _n){

    printf("Hai inserito i seguenti elementi: ");
    for(int i=0; i<_n; i++){
        printf("%d ", _vettore[i]);
    }
    printf("\n");
}
int* sommaMultipli(int *_vettore, int _n, int *somma){
    int *nuovoArray=NULL;
    int cnt=0;
    *somma=0;
    for(int i=0; i<_n; i++){
        if(_vettore[i]%3==0){
            *somma += _vettore[i];
        }
        if(_vettore[i]%2!=0){
            nuovoArray=(int*)realloc(nuovoArray, (cnt+1)*sizeof(int));
            nuovoArray[cnt]=_vettore[i];
            cnt++;
           // printf("Dispari: %d ", nuovoArray[cnt]);
        }
    }
    return nuovoArray;
}
int main(){
    int *vettore=NULL;
    int *nuovoArray=NULL;
    int n;
    int somma=0;
    do{
        printf("Inserisci la quantità degli elementi");
        scanf("%d", &n);
    }while(n<0);
    vettore=creaVett(n);
    vettore=inserisciValori(vettore, n);
    stampaVett(vettore, n);
    nuovoArray=sommaMultipli(vettore, n, &somma);
    printf("Somma dei multipli di, 3 è : %d\n", somma);
    free(vettore);
    free(nuovoArray);
}