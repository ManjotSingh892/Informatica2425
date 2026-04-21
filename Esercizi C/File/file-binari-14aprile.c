/*
Creata una struct prodotto con nome, id e prezzo
scrivere su file binario una serie di prodotti.
modificare ilo prezzo di un prodotto dato il suo id
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nome[50];
    float prezzo;
}Prodotto;

void inserisciProdotto(const char *filename){
    FILE *fp = fopen(filename, "ab");
    int n; //quantità di prodotti che si vuole inserire

    Prodotto p;

    if(fp==NULL){
        printf("Errore apertura file\n");
        return;
    }
    do{
        printf("Quanti prodotti vuoi inserire?\n");
        scanf("%d", &n);
    }while(n<0);

    for(int i=0; i<n; i++){
        printf("Prodotto %d\n", i+1);
        printf("ID: ");
        scanf("%d", &p.id);
        getchar();
        printf("Nome: ");
        scanf("%[^\n]", p.nome);
        getchar();
        printf("PREZZO: ");
        scanf("%f", &p.prezzo);
        getchar();
    }
    fwrite(&p, sizeof(Prodotto), 1, fp);
    fclose(fp);
}

void stampaProdotti(const char *filename){
    FILE *fp = fopen(filename, "rb");
    Prodotto p;

    if(fp==NULL){
        printf("Errore apertura file\n");
        return;
    }

    printf("ELenco prodotti: \n");

    while(fread(&p, sizeof(Prodotto), 1, fp)==1){

        printf("ID = %d - Nome = %s - Prezzo = %.2f\n", p.id, p.nome, p.prezzo);

    }
    fclose(fp);
}

void cercaProdotto(const char *filename, int _id){
    FILE *fp = fopen(filename, "rb");
    Prodotto p;
    int trovato;

    if(fp==NULL){
        printf("Errore apertura file\n");
        return;
    }
    while(fread(&p, sizeof(Prodotto), 1, fp)==1 && !trovato){
        if(p.id == _id){
            printf("\n Trovato Nome: %s --- Prezzo: %f", p.nome, p.prezzo);
            trovato = 1;
        }

        if(!trovato){
            printf("\nProdotto non trovato\n");
        }
  
    }
    fclose(fp);
}
    


void modificaProdotto(const char *filename, int _id, float nP){

    FILE *fp = fopen(filename, "rb+");
    Prodotto p;

    if( fp == NULL){
        printf("Errore apertura\n");
        return;
    }
    while(fread(&p, sizeof(Prodotto), 1, fp)==1){
        if(p.id == _id){
            p.prezzo == nP;
            fseek(fp, -sizeof(Prodotto), SEEK_CUR);

            fwrite(&p, sizeof(Prodotto), 1, fp);
        }
    }
    fclose(fp);
}


int main(){
    const char *file = "prodotti.bin";

    int scelta;
    int  id;
    float nuovoPrezzo;    

    do{
        printf("\nMenù Prodotti: \n");
        printf("1. Aggiungi Prodotto\n");
        printf("2. Visualizza elenco prodotti\n"); 
        printf("3.Modifica prezzo prodotto\n"); 
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta){
            case 1: 
                inserisciProdotto(file);
                break;
            case 2:
                stampaProdotti(file);
                break;
            case 3:
                printf("Inserisci l' ID del prodotto \n");
                scanf("%d", &id);
                getchar();
                cercaProdotto(file, id);
                printf("Inserisci il nuovo prezzo : ");
                scanf("%f", &nuovoPrezzo);
                getchar();
                modificaProdotto(file, id, nuovoPrezzo);
                break;
            case 0:
                printf("Esci dal programma \n");
                break;
            default:
                printf("Scelta non valida\n");

        }

    }while(scelta!=0);


}


