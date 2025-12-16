#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

typedef struct {
    string nome[20];
    string colore[20];
    //string nomeAll[20];
    //string cognomeAll[20];
    //string titoliAll[40];
    int punteggio
}squadra;



void stampa(squadra *teams, int n){
    for(int i=0; i<n; i++){
        printf("Nome squadra: %s\n", teams[i].nome);
        printf("Colore squadra: %s\n", teams[i].colore);
        printf("Punteggio squadra: %d\n", teams[i].punteggio);
        //printf("Nome Allenatore: ")
    }
}

int main(){
    squadra *teams;
    int n;

    do{
        printf("Inserisci il numero delle squadre (max 10): ");
        scanf("%d", &n);
    }while(n<0 ||n>10);

    teams = ((squadra*)malloc(sizeof(squadra)));
    if (teams==NULL){
        printf("Errore durante l'allocazione");
        return 1;
    }
    for(int i=0; i<n; i++){
	printf("Inserisci il nome della squadra: ");
	scanf("%s", teams[i].nome);
	fflush(stdin);
	printf("Inserisci il colore della squadra: ");
	scanf("%s", teams[i].colore);
	fflush(stdin);
	printf("Inserisci il punteggio della squadra : ");
	scanf("%d", &(teams[i].punteggio));
	fflush(stdin);
    }
    stampa(teams, n);
}