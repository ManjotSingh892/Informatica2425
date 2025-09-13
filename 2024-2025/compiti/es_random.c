#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int n;
    int tentativo;
    int flag;
    flag=0;
    srand(time(NULL));
    n=rand() %20+1;
     printf("\nIndovina con 5 tentativi un numero tra 1 e 20");
    for (int i=0; i<5; i++){
        printf("\ntentativo %d:", i+1);
        scanf("%d", &tentativo);
        if (tentativo==n){
            flag=1;
            break;
        }else if (tentativo<n){
            printf("\ntroppo basso");

        }else {
            printf("\ntroppo alto");

        }
        }
    if (flag){
        printf("\nhai indovinato il numero");
    }else {
        printf("\nhai sbaglaito");
    }
    return 0;

}
