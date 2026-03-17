#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct persona{
    char nome[50];
    char cognome[50];
    int eta;
}persona;

int main(){
    FILE *file= fopen("Struct_File.txt", "r");
    int n=0;
    while(n<0||n>10){  
        printf("Inserisci il numero id persone che vuoi inserire dentro l'array di struct\n");
        scanf("%d", &n);
    }
    persona persone[n];

    for(int i=0; i<n; i++){
        printf("Inserisci il nome\n");
        fget(persone.nome, stdin, 50);

        printf("Inserisci il cognome\n");
        fget(persone.cognome, stdin, 50);

        printf("Inserisci il nome\n");
        scanf("%d", &persone.eta);

        fprintf(file,"%s %s %d", persone.nome, persone.cognome, persone.eta);
    }




    fclose(file);
    return 0;
}