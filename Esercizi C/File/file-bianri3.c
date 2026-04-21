/* Creare una rubrica che gestisca la memorizzazione dei contatti e ne visualizzi l'elenco */
#include <stdio.h>

typedef struct{
    char nome[30];
    char telefono[15];
}Contatto;

void aggiungoContatto(){

    FILE *fp = fopen("rubrica.bin", "ab");

    if(fp==NULL){
        printf("Errore apertura file\n");
        return;
    }

    Contatto c;
    printf("Inserisci il nome\n");
    scanf("%[^\n]", c.nome); //tolgi il \0 dal buffer
    getchar();
    printf("Inserisci il nome di telefono: ");
    scanf("%[^\n]", c.telefono);
    getchar();
    fwrite(&c, sizeof(Contatto), 1, fp);
    fclose(fp);

}

void stampaContatti(){
    FILE *fp = fopen("rubrica.bin", "rb");

    if(fp==NULL){
        printf("Errore apertura file\n");
        return;
    }
    Contatto c;
    
    printf("\n---RUBRICA---\n");
    while( fread(&c, sizeof(Contatto), 1, fp) == 1){
        printf("Nome: %s, Telefono %s\n", c.nome, c.telefono);
    }
    fclose(fp);


}


int main(){
    int scelta;

    do{
        printf("\nMenù Rubrica: \n");
        printf("1. Aggiungi Contatto\n");
        printf("2. Visualizza contatti\n"); 
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1: 
                aggiungoContatto();
                break;
            case 2:
                stampaContatti();
                break;
            case 0:
                printf("Esci dal programma \n");
                break;
            default:
                printf("Scelta non valida\n");

        }

    }while(scelta!=0);


}