/*Calcolare la somma dei primi  N numeri naturali*/
#include <stdio.h>
int main(){
    int n=0;

    int somma=0;
    do{
        printf("Inserisci un numero\n");
        scanf("%d", &n);
            }while(n<0);
        for(int cnt=1; cnt <=n; cnt++){
            somma=somma+cnt;
            if(cnt<n){
            printf("%d+", cnt);
            }else{
                printf("%d ", cnt);
            }
        }printf("La somma è di: %d", somma);
    return 0;
}