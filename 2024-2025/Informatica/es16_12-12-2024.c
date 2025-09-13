/*Dati in input 10 numeri interi determinare il valore maggiore e quante volte compare*/
#include <stdio.h>
int main(){
    int n1=0;
    int n2=0;
    int n3=0;
    int i=0;
        for(int cnt=0; cnt!=10; cnt++){
            printf("Inserisci un numero\n");
            scanf("%d", &n1);
            if(n1>n3){
                n3=n1;
                n2=n3;
                i++;
            }else if(n1<n3){
                n2=n1;
                
            }else if(n1==n3){
                i++;
            }
            
        }   printf("Il valore maggiore è: %d\n", n3);
            printf("Viene ripetuto: %d\n", i);
    return 0;
}