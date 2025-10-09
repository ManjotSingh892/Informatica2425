/*  FUNZIONE */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
/*   MODO Vecchio:
    
    char buffer[20];
    printf("Inserisci una stringa: ");
    if(fgets(buffer, 20, stdin) !=NULL){
        printf("Hai inserito: %s", buffer);
    }
*/
    char *buffer; //puntatore alla stringa buffer
    int len;

    printf("Inserisci la lunghezza della stringa: ");
    scanf("%d", &len);

    //alloco lo spazio in memoriadella stringa

    buffer = (char *) malloc((len + 1) *sizeof(char));
    if(buffer==NULL) return NULL;

    printf("INserisci una stringa: ");
    scanf("%s", buffer);
    printf("Hai inserito: %s", buffer);

    free(buffer);


}