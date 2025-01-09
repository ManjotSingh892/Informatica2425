/*Scrivi un programma che, dati in input N numeri interi e un numero X, determini:
-quanti numeri sono maggiori di x;
-quanti numeri sono minori di x;
-quanti numeri sono uguali;
*/

#include <stdio.h>
int main(){
    int n=0;
    int N=0;
    int mag=0;
    int min=0;
    int ugual=0;
    int X=0;
            printf("INSERISCI UN LIMITE\n");
                scanf("%d", &N);
            printf("Inserisci un numero di confronto\n");
                scanf("%d", &X);
            for(int i=1; i<=N; i++){
                printf("Inserisci dei numeri\n");
                scanf("%d", &n);
                if(n>X){
                    mag++;
                }else if(n<X){
                    min++;
                }else if(n==X){
                    ugual++;
                }
            }printf("%d numeri sono maggiori. \n%d numeri sono uguali. \n%d numeri sono minori\n", mag, ugual, min);    





    return 0;
}