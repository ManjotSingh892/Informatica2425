/*Dato un numero N calcolare il suo quadrato sommando i primi N numeri dispari*/
#include <stdio.h>
int main(){
    int n=0;
    int i=1;
    int quadrato=0;

    do{printf("Inserisci un valore da assegnare ad N\n");
    scanf("%d", &n);
    }while(n<1);
    printf("Il quadrato è: %d\n", n*n);
    
    for(int cnt=1; cnt<=n; cnt++){
      
        quadrato=quadrato+i;
        i=i+2;

    }printf("Il quadrato con numeri dispari è: %d\n", quadrato);





    return 0;
}