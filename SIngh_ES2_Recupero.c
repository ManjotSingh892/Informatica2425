
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
            if(n!=0&&n>0&&n<=20&&c>=1&&c<=9){
                if(multi==0){
                    if(n%c==0){
                        multi=n/c;
                        printf("Il multiplo è %d\n", multi);
                    }
                    else{
                        printf("Non ce ne sono altri\n");
                    }
                        if(multi%c==0){
                            multi=multi/c;
                            printf("Il multiplo è %d\n", multi);
                        } 
                        else
                        {
                            printf("Non ce ne sono altri\n");
                        }
                            if(multi%c==0){
                                multi=multi/c;
                                printf("Il multiplo è %d\n", multi); 
                            }
                            else{
                                    printf("Non ce ne sono altri");
                                }
                                if(multi%c==0){
                                multi=multi/c;
                                printf("Il multiplo è %d\n", multi); 
                                }
                                else
                                {
                                    printf("Non ce ne sono altri");
                                }
                }
            }
            else
            {
                printf("Valori inseriti nin validi\n");
            }







    return 0;
}