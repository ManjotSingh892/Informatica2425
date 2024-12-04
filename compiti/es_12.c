//12 Scrivi un programma che disegna sullo schermo 3 cornici quadrate concentriche costituite dal carattere “*” rispettivamente di lato 12, 8, e 4.//
#include <stdio.h>
int main(){

    int n1=12; 
    int n2=8;
    int n3=4;
        for(int i=0; i<n1; i++){
            printf("*");
        } printf("\n");
        for(int i=0; i<n1; i++){
            printf("*\t  \t");
            printf("*\n");
        }



    return 0;
}