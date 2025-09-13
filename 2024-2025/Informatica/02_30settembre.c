//STABILIRE SE DATI DUE NUMERI A e B CONTROLLARE SE A è MINORE, UGUALE o MAGGIORE DI B//

#include <stdio.h>
    int main(){
        int a;
        int b;
        a=0;
        b=0;
        printf("Scivi il valore di a");
        scanf("%d", &a);
        printf("Scivi il valore di b");
        scanf("%d",&b);
        if (a==b){
            printf("A è uguale a B");
        }
        else
        {
         if(a>b){
            printf("A è maggiore di B");
            }
        }
        
        {
        if (a<b){
            printf("A è minore di B");
        }
        }
        return 0;
    }