//DATI  DUE  NUMERI  A  e  B  VERIFICARE  SE  A  è  IL  QUADRATO  DI  B.//
#include <stdio.h>
    int main(){
        int a;
        int b;
        a=0;
        b=0;
        float quadrato;
        quadrato=0;
        printf("Scrivi il valore di a");
        scanf("%d",&a);
        printf("Scivi il valore di b");
        scanf("%d", &b);
        quadrato=b*b;
        printf("Il quadrato di b è:%f",quadrato);
        if (a==b*b){
            printf("a è il quadrato di b");
        }
        if (a!=b*b){
            printf("a non è il quadrato di b");

        }




        return 0;
    }