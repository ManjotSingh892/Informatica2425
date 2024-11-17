/*1) Scrivi un programma che legge un numero NUM strettamente positivo e visualizza tutti i numeri pari inferiori a tale numero fino a 0.*/
#include <stdio.h>
int main(){
    int n;

        printf("Inserisci un numero\n");
            scanf("%d", &n);

        while(n<0){  
            printf("Inserisci un numero\n");
                scanf("%d", &n); 
        }
                if(n>0){
                    while(n!=0){
                        n=n-1;
                        printf("%d\n", n);
                    }
                }
        

    return 0;
}