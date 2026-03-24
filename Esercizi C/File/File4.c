/*
file con numeri a caso:
-1. riordinare i numeri mettendoli dentro ad un array
-2. riscrivere i numeri in ordine sul file

Scrivere una funzione che preso in ingresso il nome del file contente interi, lo modifichi
in modo tale da contenere gli stessi numeri ma ordinati in senso decrescente
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void OrdinaFile(char nomeFile[]){
    FILE *file= fopen("nomeFIle", "r");
    int vett[100], i, n=0;
    int tmp=0;

    if(file==NULL){
        printf("Errore apertura file\n");
        exit;
    }
    /* Lettura dei numeri dal file */
    while(fscanf(file, "%d", &vett[n])==1){ //finchè trova un numero, pk quando legge un numero ritorna 1 e se non c'è ritorna quindi 0 
        printf("Elemento %d:  %d\n", n+1, vett[n]);
        n++;
    }
    fclose(file);
    

    for(i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(vett[i]<vett[j]){
                tmp=vett[i];
                vett[i]=vett[j];
                vett[j]=tmp;
            }
        }
    }
    /*riapriamo il file*/
fopen("nomeFIle", "w");

    if(file==NULL){
        printf("Errore apertura file\n");
        return 1;
    }

    for(i=0; i<n; i++){
        fprintf(file, "%d ", vett[i]);
    }
    fclose(file);


    
}

int main(){
    char nome[20];
    printf("Inserisci il nome del file\n");
    scanf("%s", nome);
    OrdinaFile(nome);

    return 0;
}