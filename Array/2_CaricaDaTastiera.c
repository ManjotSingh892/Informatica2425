/*COSTRUIRE UN VETTORE DI N ELEMENTI
VON VALORI LETTI DA TASTIERA*/
#include <stdio.h>
#define MAX 5
int main(){
        int v[MAX];

    for(int i=0; i<MAX; i++){
        printf("Inserisci un valore\n");
        scanf("%d", &v[i]);
        printf("Ristampo -->");
        printf("%d", v[i]);   
    }


    return 0;
}