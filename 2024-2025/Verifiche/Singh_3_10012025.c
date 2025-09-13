/*Esercizio3
Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>
int main(){
    int n=0;
    int n1=0;
    int cifre=0;

        do{
            printf("Inserisci un numero\n");
            scanf("%d" ,&n);
        }while(n<0);

        for(int i=1; n%10!=0;i++){
            n1=n%10;
            printf("La cifra %d corrisponde alla posizione %d da destra\n", n1, i);
            n=n/10; 
            cifre=i;
        }printf("In tutto le cifre sono %d", cifre);



    return 0;
}