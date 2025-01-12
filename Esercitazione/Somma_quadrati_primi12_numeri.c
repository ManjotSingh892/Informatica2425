#include <stdio.h>
int main(){
    int somma=0;
        for(int i=9; i<=12+8;i++){
            somma=somma+(i*i);
        }printf("La somma dei quadrati dei primi 12 numeri successivi a 8 è %d\n", somma);

    return 0;
}