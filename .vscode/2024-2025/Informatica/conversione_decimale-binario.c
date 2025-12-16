/*Conversione da decimale a binario*/

#include <stdio.h>
int main(){
    int numerodecimale;
    //1,2,4,8,16,32//
    int bit0 =0;
    int bit1 =0;
    int bit2 =0;
    int bit3 =0;
    int bit4 =0;
    int bit5 =0;
    int quoz=0;
//Chiedo il dato d'ingresso//
    printf("Inserisci un numero decimale");
    scanf("%d", &numerodecimale);

//verifico se il dato inserito soddisfi i requisiti//

    if(numerodecimale<0 || numerodecimale>63){
        printf("Il numero non è valido");
    }


    if(numerodecimale>=0&&numerodecimale<=63){    

        if(quoz!=0){
            bit0=quoz%2;
            quoz=quoz/2;
        }
        if(quoz!=0){
            bit1=quoz%2;
            quoz=quoz/2;
        }
        if(quoz!=0){
            bit2=quoz%2;
            quoz=quoz/2;
        }
        if(quoz!=0){
            bit3=quoz%2;
            quoz=quoz/2;
        }
        if(quoz!=0){
            bit4=quoz%2;
            quoz=quoz/2;
        }
        if(quoz!=0){
            bit5=quoz%2;
            quoz=quoz/2;
        }
        printf("\nIl numero inserito %d in binario vale: %d%d%d%d%d%d", numerodecimale, bit4, bit3, bit2, bit1, bit0);
        

    }

        return 0;
}
