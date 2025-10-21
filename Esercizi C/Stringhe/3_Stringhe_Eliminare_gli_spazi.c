/*
Eliminare gli spazi da una stringa
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* String;   //abbiamo fatto typedef per dare un nome più semplice 

int main(){
    char *buffer[200];  // diamo al buffer una dimensione di 200 caratteri 
    String frase;

    printf("Inserisci una stringa\n");
    fgets(buffer, sizeof(buffer), stdin);   //prende i caratteri da tastiera uno ad uno e gli salva
    int len = strlen(buffer);
    compatta(buffer, len);
    frase = (String)malloc((len+1)*sizeof(char));
    if(frase==NULL){
        printf("C' è un errore\n");
        return 1;
    }
    strcpy(frase, buffer);
    Eliminazione(frase, len);
    Stampa(frase);
    free(frase);
    return 0; 
}

void compatta(String buffer, int len){  //compatta serve per togliere dalla stringa il carattere \n

    if(len>0 && buffer[len-1] == '\n'){
        buffer[len - 1] = '\0';
        len--;
    }
}

void Eliminazione(String frase, int len){    //funzione int perché ritorna il numero delle vocali che ha contato
    int cnt=0;
     String frase_temp;
    for( int i = 0; frase[i]!= '\0'; i++){  //for che continua finchè non trova il carattere terminatore
        
        if(frase[i]== ' '){
           // int posizione=0;
            //posizione=i;
            //frase_temp=frase[]; // quando trovo lo spazio devo copiare la stringa
                                  //in una stringa temporanea, poi in quella vera tengo la prima parte 
                                  //faccio realloc con una dimensione di uno spazio in meno
                                  //poi riattacco nella stringa originale la seconda parte dalla temp che prima avevoignorato
            for(int j=i;frase[j]!= '\0'; j++){
            frase[j]=frase[i+1];

            }
            len=sizeof(frase)/sizeof(char);
            //frase = (String)realloc((len)*sizeof(char));
            //for(int j=0, frase[j]!= '\0', j++){

            }frase = (String)realloc(frase, (len)*sizeof(char));




        }      
    }

void Stampa(String frase){
    printf("Questa è la stringa modificata: \n %s ", frase);
    /*for(int i=0; frase[i]!= '\0'; i++){

        printf("%s ", frase[i]);
    }
        */
}

