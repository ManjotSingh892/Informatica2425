#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
INSERISCI LE INFORMAZIONI DI STUDENTI:
NOME - ETà - MEDIA VOTI SCOLASTICI
DETERMINARE LO STUDENTE CON AL MEDIA SCOLASTICA PIù ALTA
*/

typedef struct Studente{
    char nome[50];
    int eta;
    float media;
}Studente;

void scriveStudenti(char *nome_file, int n_studenti){
    FILE *f = fopen(nome_file, "ab");
    if(f == NULL){
        printf("Errore nel aprire il file\n");
        return;
    }

    for(int i=0; i<n_studenti; i++){
        Studente s;
        printf("Inserisci il nome studente %d", i+1);
        scanf("%49s", s.nome);
        printf("Inserisci età studente %d", i+1);
        scanf("%49s", s.eta);
        printf("Inserisci media voti studente %d", i+1);
        scanf("%49s", s.media);
        getchar();

        fwrite(&s, sizeof(Studente), 1, f); //perchè è un file bianrio e per mettere i dati sul file 

    }

    fclose(f);
    if(ferror(f)){  //controlla se il file e in stato di errore oppurre no
        printf("Errore nella chiusura del file....\n");
    }
}


void leggiStudenti(char *nome_file, Studente *array){ //dichiaro array con puntatore così che da gestirlo come dinamico
    FILE *f = fopen(nome_file, "rb");
    if(f == NULL){
        printf("Errore nell'aprire il file\n");
        return array;
    }
    int i=0; 
    array = (Studente*) realloc(array, sizeof(Studente)); //usando il mio array come dinamico devo allocare la memoria dell'array con la realloc
        if(array == NULL){
            printf("Errore di allocazione\n");
            return array;
        }
    while(fread(&array[i], sizeof(Studente), 1, f) != 0){ //fread epr leggere il file finchè legge qualcosa e si ferma quando non legge niente
        i++;
        array= (Studente*) realloc(array, (i+1) * sizeof(Studente)); //ogni volta che chiamo la fread leggo uno studnete, ma prima di leggere lo studente devo avere lo spazio sufficiente per leggere uno studente in più    
            if(array == NULL){
                printf("Errore di allocazione\n");
                return array;
            }
    }
    array= (Studente*) realloc(array, i * sizeof(Studente));
        if(array == NULL){
            printf("Errore di allocazione\n");
            return array;
        }
    fclose(f);  
    return array;

}

Studente trova_migliore(Studente *array){
    int dim = sizeof(array) / sizeof(Studente);
    Studente best = {"", 0, 0};

    for(int i=0; i<dim; i++){
        if(array[i].media>best.media){
            best.media=array[i].media;
            best.eta=array[i].eta;
            strcpy(best.nome, array[i].nome);
        }
    }return best;
}

int main(){

    
    return 0;
}