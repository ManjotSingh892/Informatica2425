
/*Esercizio2
DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/
#include <stdio.h>
int main(){
    int n;
    int c;
    int multi=0;
        printf("Inserisci un numero tra 1 e 20\n");
        scanf("%d", &n);
        printf("Inserisci un numero tra 1 e 9\n");
        scanf("%d", &c);
            if(n!=0&&n>0&&n<20&&c>=1&&c<=9){
                if(multi==0){
                    if(n%c){
                        multi=n/c;
                        printf("Il mulriplo è %d\n", multi);
                    }
                }
            }
            else
            {
                printf("Valori inseriti nin validi\n");
            }







    return 0;
}