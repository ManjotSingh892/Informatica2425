#include <stdio.h>
int main(){
    int n, divisore;
        printf("Inserisci un numero\n");
        scanf("%d", &n);
        divisore=2;

        if(n%divisore==0){
            printf("Il numero %d è divisibile per %d\n", n, divisore);
        }
        else
        {
            printf("Il numero %d non è divisore di %d\n", n, divisore);
        }
        
    return 0;
}