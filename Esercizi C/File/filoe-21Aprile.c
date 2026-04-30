/* Creare una rubrica telefonica utilizzando un file binario

    aggiungere o creare il file contatti
    stampare la lista contatti
    elimina un contatto in  base al nome 
    separa il file ribrica in due file in base al sesso 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    char telefono[15];
    char sesso;
} Contatto;

void aggiungiContatto() {
    FILE *fp = fopen("rubrica.dat", "ab"); // append in binario
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    Contatto c;
    printf("Inserisci nome: ");
    scanf(" %[^\n]", c.nome);
    getchar();
    printf("Inserisci telefono: ");
    scanf(" %[^\n]", c.telefono);
    getchar();

    printf("Inserisci il sesso: ");
    scanf(" %c", &c.sesso);
    getchar();

    fwrite(&c, sizeof(Contatto), 1, fp);
    fclose(fp);

    printf("Contatto aggiunto!\n");
}

void visualizzaRubrica() {
    FILE *fp = fopen("rubrica.dat", "rb"); // lettura binaria
    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    Contatto c;
    printf("\n--- Rubrica ---\n");
    while (fread(&c, sizeof(Contatto), 1, fp) == 1) {
        printf("Nome: %s, Telefono: %s, Sesso: %c\n", c.nome, c.telefono, c.sesso);
    }
    fclose(fp);
    printf("---------------\n");
}

void eliminaContatto(){
    FILE *fp = fopen("rubrica.dat", "rb");
    FILE *fpTmp = fopen("temp.dat", "wb");
    char cerca[30];
    Contatto c; 

    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    if (fpTmp == NULL) {
        printf("Errore sul file temporaneo!\n");
        return;
    }

    printf("Inserisci il nome: ");
    scanf(" %[^\n]", cerca);
    getchar();

    while(fread(&c, sizeof(Contatto), 1, fp)){ //fread==1 se legge qualcosa
        if(strcmp(c.nome, cerca)==0){ //0 se trova il nome
            printf("Trovato!...l'elemento sarà eliminato.\n");
        }else{
            fwrite(&c, sizeof(Contatto), 1, fpTmp);
        }
    }
    fclose(fp);
    fclose(fpTmp);

    fp = fopen("rubrica.dat", "wb");
    fpTmp = fopen("temp.dat", "rb");

    while(fread(&c, sizeof(Contatto), 1, fpTmp)==1){ 
            fwrite(&c, sizeof(Contatto), 1, fp);   
    }
    fclose(fp);
    fclose(fpTmp);

}



void separaContatti(){
    FILE *fp = fopen("rubrica.dat", "rb");
    FILE *fpF = fopen("femmine.dat", "ab");
    FILE *fpM = fopen("maschi.dat", "ab");
    Contatto c;

    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    if (fpM == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    if (fpF == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }


    while(fread(&c, sizeof(Contatto), 1, fp)==1){
        if(c.sesso== 'f'|| c.sesso == 'F'){
            fwrite(&c, sizeof(Contatto), 1, fpF);
        }else if( c.sesso== 'm'|| c.sesso == 'M'){
            fwrite(&c, sizeof(Contatto), 1, fpM);
        }
    }

    fclose(fpM);
    fclose(fp);
    fclose(fpF);


    fpF = fopen("femmine.dat", "rb");
    fpM = fopen("maschi.dat", "rb");

    printf("\n-------------Rubrica Maschi----------------\n");
    while(fread(&c, sizeof(Contatto), 1, fpM)==1){
        printf("Nome: %s, Telefono: %s, Sesso: %c\n\n", c.nome, c.telefono, c.sesso);
    }


    printf("\n-------------Rubrica Femmine----------------\n");
    while(fread(&c, sizeof(Contatto), 1, fpF)==1){
        printf("Nome: %s, Telefono: %s, Sesso: %c\n\n", c.nome, c.telefono, c.sesso);
    }

    fclose(fpM);
    fclose(fpF);


}


int main() {
    int scelta;

    do {
        printf("\nMenu Rubrica:\n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza rubrica\n");
        printf("3. Elimina contatto\n");
        printf("4. Separa i contatti in base al sesso\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                aggiungiContatto();
                break;
            case 2:
                visualizzaRubrica();
                break;
            case 3:
                eliminaContatto();
                break;
            case 4:
                separaContatti();
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