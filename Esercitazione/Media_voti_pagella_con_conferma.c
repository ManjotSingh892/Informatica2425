#include <stdio.h>
int main(){
    int n=0;
    int media=0;
    int somma=0;
    char risposta;
    risposta='N';
        for(int i=1; risposta=='N'; i++){
        printf("Inserisci un voto\n");
        scanf("%d", &n);
        printf("I voti da inserire sono terminati S o N ?\n");
        scanf(" %c", &risposta);
        somma=somma+n;
        media=somma/i;
        }printf("La media è %d", media);





    return 0;
}