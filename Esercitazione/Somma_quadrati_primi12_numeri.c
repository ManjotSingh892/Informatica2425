#include <stdio.h>
int main(){
    int somma=0;
    int n=0;
    int fine=0;
    printf("Inserisci un numero da cui iniziare\n");
    scanf("%d", &n);
    printf("Inserisci quanti valori vuoi visualizzare\n");
    scanf("%d", &fine);
        for(int i=n; i<=fine+n;i++){
            somma=somma+(i*i);
        }printf("La somma dei quadrati dei primi %d numeri successivi a %d è %d\n", fine, n, somma);

    return 0;
}