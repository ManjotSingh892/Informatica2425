/*Inizializzare un array e stamparlo il contrario*/
#include <stdio.h>
#define MAX 10 //dimensione dell'Array
int main(){
    int v[MAX];  //parentesi quadre= alt gr e parentesi//

    for(int i=MAX; i>=1; i--){
        v[i] = 2*i;
        printf("%d\n", v[i]);
    }


    return 0;
}         