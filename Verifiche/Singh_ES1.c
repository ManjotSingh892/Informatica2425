/*Esercizio1
CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/
#include <stdio.h>
int main(){
    int n1, k, c1, c2, c3, c4;
        printf("Inserisci un  numero\n");
            scanf("%d", &n1);
        printf("Inserisci un valore k che vuoi vedere quante volte comnpare nel numero che hai fornito prima\n");
            scanf("%d", &k);
        if(n1<0||n1>9999){
            printf("Il valore inserito non è valido");
        }
        else
        {
            c1=(n1/1000);
            c2=(n1/100)-(c1*10);
            c3=(n1/10)-(c1*10)-(c2*10);
            c4=(n1/10)-(c1*10)-(c2*10)-(c3*10);



        }





    return 0;
}