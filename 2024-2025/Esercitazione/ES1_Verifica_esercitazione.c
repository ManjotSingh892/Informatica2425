/*Esercizio1
CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n, q, r, k;
    int cnt=0;
    int cntk=0;
    srand(time(NULL));
        n=rand()%1000;
        printf("Inserisci un numero da 0- a 9 compreso da dare come valore a K\n");
            scanf("%d", &k);

            if(k>=0&&k<=9){
                r=n%10;
                q=n/10;
                cnt++;
                    if(r==k){
                        cntk++;
                    }

                if(q!=0){
                    r=q%10;
                    q=q/10;
                    cnt++;
                    if(r==k){
                        cntk++;
                    }
                }
                    if(q!=0){
                        r=q%10;
                        q=q/10;
                        cnt++;
                        if(r==k){
                        cntk++;
                        }
                    }
                        if(q!=0){
                            r=q%10;
                            q=q/10;
                            cnt++;
                            if(r==k){
                                cntk++;
                            }
                        }
            }
            else{
                printf("Il valore inserito per k non è valido\n");
            }

            printf("Le cifre comparse sono %d\n", cnt);
            printf("Il valore di n è %d\n", n);
            printf("Il valore di K appare %d volte\n", cntk);

    return 0;
}