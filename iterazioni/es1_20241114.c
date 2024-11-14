/*
    Dati 5 valori stamparli (devo inserire un valore e deve essere ristampato subito dopo, devo ripetere tutto questo fino a 5 volte )
*/
#include <stdio.h>

int main(){
    int num;
    int counter=0;
    
    while(counter<5){
        printf("Inserisci un numero\n");
        scanf("%d", &num);
        counter++;
        printf("Il numero è: %d\n", num);
    }


    return 0;
}