/*
Provare la libreria string.h per le seguenti operazioni 
1. calcolo lunghezza stringa
2. controllo se le stringhe sono uguali
3. copiare una stringa
4. cercare un carattere e comunicare la frequenza
5. concatenare due stringhe
6. ricerca di una stringa nell'altra
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[50]="ciao";
    char str[]="a tutti";
    char dest[50];
    int len = strlen(s);
    int cnt=0;
    printf("Lunghezza: %d\n", len);
    printf("Confronto: %d\n", strcmp(s, str));
    strncpy(dest, s, len+1);
    printf("Copia: %s\n", dest);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a'){
             cnt++;
        }
    }
    printf("Frequenza 'a': %d\n", cnt);
    strcat(s, str);
    printf("Concatenazione: %s\n", s);
    printf("Ricerca: %s\n", strstr(s, "tutti"));
    return 0;
}
