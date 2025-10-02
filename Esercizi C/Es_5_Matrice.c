/*

Scrivi un programma in C che:
    1. Chiede all'utente quanti numeri interi vuole inserire;
    2. Alloca dinamicamente un array di quella dimensione con malloc();
    3. Permette al'utente di inserire i numeri;
    4. Chiede all'utente se vuole aumentare la dimensione dell'Array,
        - Se sì, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
        - Permette quindi di insirire i nuovi valori negli spazi aggiunti;
    5. Infine, stampa tutti gli elementi dell'array;
*/

#include <stdio.h>

void Aumento(){
    int flag=0;
    do{
        printf("Vuoi aumentare la dimensione dell'Array?\n");
        printf("Inserisci: \n 1. Si\n 0: No\n");
        scanf("%d", &flag);
    }while(flag!=0||flag!=1);
    if(flag==0){
        printf("Hai deciso di non aggiungere altri elementi\n");
    }
    else {
        richiesta();
        Allocamento();
        stampaVett(vettore, n);

    }

}

void richiesta(){
do{
    printf("Quanti numeri vuoi inserire\n");
    scanf("%d", & *n);
}while(*n<0);

}

void Allocamento(vettore, n){
int *vettore=(int*)malloc(n *sizeof(int));
}

int* creaVett(int n){

    int *vettore=(int*)malloc(n *sizeof(int));
    if(vettore==NULL){
        printf("Errore di allocazione\n");
        exit(1);
    }
    return vettore;
}

int* inserisciValori(int *vettore, int n){

    for(int i=0; i<n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &vettore[i]);
    }
    return vettore;
}

void stampaVett(int *vettore, int n){

    printf("Hai inserito i seguenti elementi: ");
    for(int i=0; i<n; i++){
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

int main(){
    int n;
    int *vettore=NULL;
    int numeri;
    richiesta();
    vettore=creaVett(n);
    Allocamento();
    vettore=inserisciValori(vettore, n);
    Aumento();
    stampaVett(vettore, n);
    return 0;
}