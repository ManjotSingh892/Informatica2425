/*
CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO;
- CANCELLAZIONE DI UN LIBRO;
- MODIFICA DELL'ISBN;
- SEPARARE LA LISTA DEI LIBRI IN DUE LISTE CONTENENTI RISPETTIVAMENTE I LIBRI CREATI PRIMA DEL 2000 E QUELLI DOPO;
TUTTO VIENE GESTITO DA FILE BINARI

typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;

void aggiungi(){
    FILE *fp = fopen("Libri.dat", "ab"); 

    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    Libro l;
    printf("Inserisci l'autore: ");
    scanf(" %[^\n]", l.autore);
    getchar();

    printf("Inserisci titolo: ");
    scanf(" %[^\n]", l.titolo);  // %[^\n] aquisisce la stringa e toglie "\n"
    getchar();

    printf("Inserisci l'ISBN: ");
    scanf(" %[^\n]", l.ISBN);
    getchar();

    printf("Inserisci l'anno di pubblicazione del libro\n");
    scanf(" %d", l.anno);
    getchar();

    fwrite(&c, sizeof(Libro), 1, fp);
    fclose(fp);

    printf("Libro aggiunto!\n");

}




void ricercaLibro(){


}

void cancella(){
    FILE *fp = fopen("Libri.bin", "rb");
    FILE *fpTmp = fopen("temp.bin", "wb");
    char cerca[30];
    Libro c; 

    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    if (fpTmp == NULL) {
        printf("Errore apertura del file temporaneo!\n");
        return;
    }

    printf("Inserisci l'ISBN: ");
    scanf(" %[^\n]", cerca);
    getchar();

    while(fread(&c, sizeof(Libro), 1, fp)){ //fread==1 se legge qualcosa
        if(strcmp(c.ISBN, cerca)==0){ //0 se trova il nome
            printf("Trovato!...il libro sarà eliminato.\n");
        }else{
            fwrite(&c, sizeof(Libro), 1, fpTmp);
        }
    }
    fclose(fp);
    fclose(fpTmp);

    fp = fopen("Libri.bin", "wb");
    fpTmp = fopen("temp.bin", "rb");

    while(fread(&c, sizeof(Libro), 1, fpTmp)==1){ 
            fwrite(&c, sizeof(Libro), 1, fp);   
    }
    fclose(fp);
    fclose(fpTmp);

}

void modificaIsbn(){ //utilizzo di fseek, per modificare 



    FILE *fp = fopen(Libri.bin, "rb+");
    Libro l;

    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    while(fread(&p, sizeof(Prodotto), 1, fp)==1){
        if(p.id == _id){
            p.prezzo = nP;

            fseek(fp, -sizeof(Prodotto), SEEK_CUR);

            fwrite(&p, sizeof(Prodotto), 1, fp);
        }
    }
    fclose(fp);


}

void separa(){



}

int main(){
    FILE *fp;
    int scelta;

    do {
        printf("\nMenu Libri:\n");
        printf("1. Aggiungi Libro / Crea lista di libri\n");
        printf("2. Ricerca libri per ISBN\n");
        printf("3. Elimina Libro\n");
        printf("4. Modofica ISBN\n");
        printf("5. Separa libri prima del 2000\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                aggiungi();
                break;
            case 2:
                ricercaLibro();
                break;
            case 3:
                cancella();
                break;
            case 4:
                mdificaIsbn();
                break;
            case 5:
                separa();
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 0);

    return 0;
}