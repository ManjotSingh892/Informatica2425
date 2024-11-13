/*Esercizio2
INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI; Massimo 4 numeri inseribili*/

#include <stdio.h>
int main(){
    int n1, n2, n3, n4;
    int somma;
    float media;

        printf("Inserisci un  numero");
        scanf("%d", &n1);
        if(somma<200){
            printf("Inserisci un numero");
                scanf("%d", &n2);
        }else if(somma<200){
            printf("Inserisci un numero");
                scanf("%d", &n3);   
        }else if(somma<200){
            printf("Inserisci un numero");
                scanf("%d", &n4);
        }
        else{
        printf("Non sei riuscito a raggiungere il valore di 200 in quattro tentativi\.");
        }
          media=(n1+n2+n3+n4)/4;
        printf("La media è di:" ,media);
        







    return 0;
}