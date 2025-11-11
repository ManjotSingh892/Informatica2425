#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

void cifratura(string codificata, int cifra){
    int grande;
    printf("Inserisci la stringa\n");
    fgets(codificata, 100, stdin);
    do{
        printf("Inserisci un numero di cifratura\n");
        scanf("%d", &cifra);
    }while(cifra<1||cifra>=32);

    /*do{
        printf("Inserisci 1=Grande, 0=Piccolo\n");
        scanf("%d", &grande);
    }while(grande!=0&&grande!=1);*/


    for(int i=0; i< strlen(codificata); i++){
        int temp;
        /*if(codificata[i]==122-32){
            codificata[i]=65-32;
        }*/

        codificata[i]=codificata[i]+cifra;
        if(codificata[i]>'z'){
            temp=codificata[i]-122+97;
            codificata[i]=temp;
        }

        /*if(codificata[i]>'Z'&&codificata<){
            temp=codificata[i]-90+65;
            codificata[i]=temp;

        }*/
       /*if(grande==1){
        codificata[i]=codificata[i]-32;
       }*/
    }
}


void DEcifratura(string codificata, int cifra){
    for(int i=0; i<  strlen(codificata); i++){
        codificata[i]=codificata[i] - cifra;
    }
}


void stampa(string codificata){
    printf("%s\n", codificata);
}


int main(){

    string codificata[50];
    int cifra=0;

    cifratura(codificata, cifra);
    stampa (codificata);
    //DEcifratura(codificata, cifra);
    //stampa (codificata);

    return 0;
}