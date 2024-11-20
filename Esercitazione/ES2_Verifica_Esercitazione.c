/*Esercizio2
INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI; Massimo 4 numeri inseribili*/
#include <stdio.h>
int main(){
    int n=0;
    int somma=0;
    int cnt=0;
    int media=0;
    int flag=0;

if(somma==0){
    printf("Puoi inserire massimo 4 numeri per arrivare a 200\n");
    printf("Inserisci un numero\n");
    scanf("%d", &n);
    somma=n;
    cnt++;
}

if(somma<200&&cnt<4){
    printf("Inserisci un numero\n");
    scanf("%d", &n);
    somma=somma+n;
    cnt++;
}

if(somma>=200){
    media=somma/cnt;
    printf("Sei riusci ad arrivare a 200 con %d tentativi\n", cnt);
    printf("La media è di: %d", media);
}

if(somma<200&&cnt<4){
    printf("Inserisci un numero\n");
    scanf("%d", &n);
    somma=somma+n;
    cnt++;
}

if(somma>=200){
    media=somma/cnt;
    printf("Sei riusci ad arrivare a 200 con %d tentativi\n", cnt);
    printf("La media è di: %d", media);
}

if(somma<200&&cnt<4){
    printf("Inserisci un numero\n");
    scanf("%d", &n);
    somma=somma+n;
    cnt++;
}

if(somma>=200){
    media=somma/cnt;
    printf("Sei riusci ad arrivare a 200 con %d tentativi\n", cnt);
    printf("La media è di: %d", media);
}

if(cnt==4&&somma<200){
    printf("Non sei riusci to ad arrivare a 200 con 4 tentativi\n");
}




    return 0;
}