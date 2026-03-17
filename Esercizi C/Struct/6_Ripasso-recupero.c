/*
DATA LA STRUCT PRODOTTO:
- NOME 
-QUANTITà
-PREZZO

ESEGUIRE:

1. inserire prodotto
2. stampare elenco prodotti
3. cercare un prodotto per codice
4. calcolare il valore totale del magazzino
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int codice;
    int quantita;
    float prezzo;
}prodotto;

void inserisci(prodotto* p, int n){
    for(int i=0; i<n;i++){
        printf("Inserisci nome del prodotto\n");
        scanf("%s", p[i].nome);

        printf("Inserisci il codice del prodotto\n");
        scanf("%d", p[i].codice);

        printf("Inserisci la quantità del prodotto\n");
        scanf("%d", p[i].quantita);   

        printf("Inserisci il prezzo del prodotto\n");
        scanf("%d", p[i].prezzo); 
    }
}

void mostra(prodotto* p, int n){
    for(int i=0; i<n;i++){
        printf("Nome del prodotto: %s\n", p[i].nome);

        printf("Codice del prodotto: %d\n", p[i].codice);

        printf("Quantità del prodotto: %d\n", p[i].quantita);

        printf("Prezzo del prodotto: %f\n", p[i].prezzo );
    }
}

void cerca (prodotto* p){
    int cod=0;

    do{
        printf("Inserisci il codice del prodotto da cercare\n");
        scanf("%d", &cod);
    }while(cod<0);


    for(int i=0; i<sizeof p; i++){
        if(p[i].codice==cod){
            printf("Il nome del prodotto è: %s", p[i].nome);
        }
    }
}

void totval(prodotto* p){
    int tot=0;

    for(int i=0; i<sizeof p; i++){
            tot=tot+p[i].quantita;

    }printf("La quantità totale è: %d", tot);
}

int main (){
    prodotto* p=(prodotto*)malloc(sizeof(prodotto));
    int n;

    do{
        printf("Inserisci la quantità di prodotti da mettere\n");
        scanf("%d, &n");
    }while(n<0);

        inserisci(p, n);
        mostra(p, n);
        cerca(p);
        totval(p);


    return 0;
}