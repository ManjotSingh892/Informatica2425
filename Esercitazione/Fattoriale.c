//fattoriale di un numero inserito//
#include <stdio.h>
int main(){
    int n=0;
    int fattoriale=1;
        printf("Inserisci un numero\n");
        scanf("%d", &n);

            for(int i=1; i<=n; i++){
                fattoriale=fattoriale*i;
            }printf("Il fattoriale di %d è %d", n, fattoriale);



    return 0;
}