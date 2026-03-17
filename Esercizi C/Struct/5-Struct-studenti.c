/*
Classe di studenti:
Cognome, Nome, Classe, Matricola
Per ogni studente dotato di matricola abbimo
le informazioni riguardo gli esami e il livello raggiunto

1) Ricercare lo studente con più certificazioni
*/
#include <stdio.h>

typedef struct {
    char cognome[50];
    char nome[50];
    char classe[50];
    int matricola; //1000-9999
}studenti;

typedef struct{
    int matricola;
    struct esame{
        char corso[20];
        int livello; //(1-3)
    };
}cetrificazioni;

void menu(studenti studentiA[],cetrificazioni cetrificazioniA[]){
    int s=0;

    do{
        printf("Inserisci al tua scelta\n:");
        printf("1. Dati in input degli studenti\n");
        printf("2. Ricerca dello studente con più certificazioni\n");
        scanf("%d", &s);

    }while(s<=0||s>2);

    switch (s)
    {
    case 1:
        input(studentiA, cetrificazioniA);
        break;

    case 2:
        Ricerca(studentiA,  cetrificazioniA);
        break;

    default:
        break;
    }


}

void input( studenti studentiA[], cetrificazioni cetrificazioniA[]){

    do{
        printf("Inserisci il cognome\n");
        fgets(studentiA->cognome, 50, stdin);

        printf("Inserisci il nome\n");
        fgets(studentiA->nome, 50, stdin);

        printf("Inserisci il classe\n");
        fgets(studentiA->classe, 50, stdin);

        printf("Inserisci le certificazioni\n");
        fget(esame->corso, 50, stdin);


    }while(studentiA->nome==NULL||studentiA->cognome==NULL||studentiA->classe==NULL);

}

void Ricerca( studenti studentiA[], cetrificazioni cetrificazioniA[]){


}
int main(){
    studenti* studentiA[];
    cetrificazioni* certificazioniA[];
    menu(studentiA[], cetrificazioniA[]);


    return 0;
}