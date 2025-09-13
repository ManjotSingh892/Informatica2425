/*Esercizio1
Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/

#include <stdio.h>
int main(){
    int n=0;
    int cnt=1;

        for(int i=1; i<=500;i++){
            for(int j=1; j<=i; j++){
                if(i%1==0&&i%i==0&&i%j!=0&&j!=1&&j!=i){
                    cnt++;
                    n=i;
                }else{
                    n=0;
                }

            }

        }




        /for(int i=1; i<=100;i++){//non lo so se va//
            for(int j=1; j<=i; j++){
                if(i%1==0&&i%i==0&&i%j!=0){
                    cnt++;
                    n=i;
                }else{
                    n=0;
                }
            }printf("%d è un numero primo\n", n);

        }printf("In tutto ci sono stati %d numeri primi\n", cnt);
    

    return 0;
}