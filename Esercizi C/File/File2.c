//Scrittura di dati formattati

#include <stdio.h>
#include <string.h>

int main(){
  FILE *file = fopen("dati.txt", "r");
    char nome [100];

    if(file==NULL){
        printf("Errore apertura file\n");
        return 1;
    }

    fprintf(file,"%s %d %f", "Luca", 12, 6.5);
    fclose(file);
    return 0;

}