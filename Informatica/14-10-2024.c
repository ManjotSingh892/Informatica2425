/*Scrivere un programma che letto due orari in ore, minuti e secondi restituisce quale orario viene prima.*/
#include <stdio.h>
int main(){
    int ore1;
    int minuti1;
    int secondi1;
    int ore2;
    int minuti2;
    int secondi2;

        printf("Inserisci le ore del primo orario\n");
            scanf("%d", &ore1);
        printf("Insersisci i minuti del primo orario\n");
            scanf("%d", &minuti1);
        printf("Inserisci i secondi del primo orario\n");
            scanf("%d", &secondi1);
        printf("Inserisci le ore del secondo orario\n");
            scanf("%d", &ore2);
        printf("Insersisci i minuti del secondo orario\n");
            scanf("%d", &minuti2);
        printf("Inserisci i secondi del secondo orario\n");
            scanf("%d", &secondi2);
        if (ore1>59||ore2>59||minuti1>59||minuti2>59||secondi1>59||secondi2>59)
            printf("Una delle due date non è accettabile\n");
        if (ore1<1||ore2<1||minuti1<1||minuti2<1||secondi1<1||secondi2<1)
            printf("Una delle due date non è accettabile\n");
        
        if (ore1>ore2){
            printf("L'orario numero 2 viene prima\n");
        }
        if (ore1>ore2) {
            if (minuti1>minuti2)
                printf("L'orario numero 2 viene prima\n");
        }
        if (ore1>ore2){
            if (minuti1>minuti2)
                if (secondi1>secondi2)
                    printf("L'orario numero 2 viene prima\n");
        }
         if (ore1<ore2){
            printf("L'orario numero 1 viene prima\n");
        }
        if (ore1<ore2) {
            if (minuti1<minuti2)
                printf("L'orario numero 1 viene prima\n");
        }
        if (ore1<ore2){
            if (minuti1<minuti2)
                if (secondi1<secondi2)
                    printf("L'orario numero 1 viene prima\n");
        }
   

    return 0;
}