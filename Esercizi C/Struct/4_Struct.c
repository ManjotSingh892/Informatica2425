/*
REGISTRARE LE INFORMAZIONI DI ALCUNI LIBRI
    ES:
        TITOLO, AUTORE, ANNO PUBBLICAZIONE

    ARRAY DI LIBRI.
    CARICARE ARRAY LIBRI, STAMPARE, RIMUOVERE UN LIBRO, CERCARE UN LIBRO IN BASE AL TITOLO
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titolo[40];
    char autore[40];
    int anno;
}Libri;

void Carica(Libri libri[], int n){
    for (int i=0;i<n;i++) {
        printf("Titolo: \n");
        scanf("%s", libri[i].titolo);
        printf("Autore:  \n");
        scanf("%s", libri[i].autore);
        printf("Anno: \n");
        scanf("%d", &libri[i].anno);
    }
}

void Stampa(Libri libri[], int n) {
    for (int i=0;i<n;i++) {
            printf("Titolo: %s\n", libri[i].titolo);
            printf("Autore: %s\n", libri[i].autore);
            printf("Anno: %d\n", libri[i].anno);
    }
}

void Cerca(Libri libri[], int n){
    char cercare[20];
    int trovata=0;

    printf("Scegli:\n");
    printf("1. Cerca tra titoli\n:");
    printf("2. Cerca tra gli autori\n");
    printf("3. Cerca per anno\n");      //fare un if per vedere la scelta 

    printf("Inserisci il dato del libro da cercare: \n");
    fget(cercare, 20, stdin);

    for(int i=0;i<n;i++){
        trovata=strcmp(cercare, libri[i].titolo);
        if(trovata==0){
            printf("Libro non trovato\n\n");
        }else if(trovata==1){
            printf("Libro trovato\n\n");
        }
    }

    

}


void Rimozione(Libri libri[], int n){
    for(int i=0;i<n;i++){
        
    }

}

void Menu(Libri libri[], int n){
    int op=0;
    int continua=1;
    do{

        printf("Scegli una opzione:\n");
        printf("1. Carica i libri\n");
        printf("2. Stampa l'elenco dei libri\n");
        printf("3. Ricerca di un libro\n");
        printf("4. Rimozione di libri\n");
        scanf("%d", &op);

    }while(op<=0||op>4);

    do{
        switch (op)
        {
        case 1:
            Carica(libri, n);
            break;

        case 2:
            Stampa(libri, n);
            break;

        case 3:
            Cerca(libri, n);
            break;

        case 4:
            Rimozione(libri, n);
            break;
        
        default:
            break;
        }

        printf("Vuoi continuare ad usare il menù?\n");
        printf("0. Per fermarsi \n 1. Per continuare\n");
        scanf("%d", &continua);
    }while(continua==1);

}


int main(){
    Libri* libri;
    int n=0;

    do{
        printf("Quanti libri vuoi inserire?\n");
        scanf("%d", &n);
    }while(n==0||n>10);

    Menu(libri, n);

}