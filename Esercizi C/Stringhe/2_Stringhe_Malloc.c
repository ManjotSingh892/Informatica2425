/* data una stringa 
contare il numero delle vocali */


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

    printf("Il numero delle vocali è: %d", conteggio(frase));
    free(frase);

    return 0; 
}

void compatta(String buffer, int len){  //compatta serve per togliere dalla stringa il carattere \n

    if(len>0 && buffer[len-1] == '\n'){
        buffer[len - 1] = '\0';
        len--;
    }
}

int conteggio(String frase){    //funzione int perché ritorna il numero delle vocali che ha contato
    int cnt=0;
    for( int i = 0; frase[i]!= '\0'; i++){  //for che continua finchè non trova il carattere terminatore
            char c = tolower(frase[i]);
            
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){ //faccio la if() per verificare se ci sono le vocali e se s i quali dentro alla stringa
                cnt++;

            }
    }return cnt;    //return cnt mi fa ritornare il valore di quante vocali ho dentro alla stringa
    
}