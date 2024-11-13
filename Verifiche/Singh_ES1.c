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
    int flag=0;
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

        if(c1==k&&c2==k&&c3==k&&c4==k){
            printf(Ci sono 4 volte k);
        }else

        if(c1==k&&c2==k){
            printf("c'èk 2 volte");
        }else
        if(c3==k&&c4==k){
            printf("C'è 2 volte");
        }else
        if(c1==k&&c3==k){
            printf("C'è 2 volte k");
        }else
        if(c2==k&&c4==k){
            printf("C'è 2 voltek")
        }
        else
        {if(C1==K)
            printf("C'è una volta");
        }
        else
        {
            if(c2==k)
                printf("C'è 2 volte");
        }
        else
        {
            if(c3==k)
                printf("C'è 1 volta")
        }
        else
        {
            if(c3==k)
                printf("C'è 1 volta")
        }
        else 
        {
            if(c1==k&&c2==k&&c3==k)
            printf( "tre volte")
        }
        else
        {
            if(c1==k&&c4==k&&c3==k)
                printf("3 volte")
        }
        else{
            printf("Il valore k non è presente neanche una volta");
        }

     






    return 0;
}