/*progettate un algoritmo che legga un numero b<a e scriva quante volte a è divisibile per b.
ES: a=162 e b=3 a è divisibile 4 volte*/
#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int quoziente=0;
    int cnt=1;
        do{
            printf("Inserisci un valore per A\n");
            scanf("%d", &a);
            printf("Inserisci un valore per B\n");
            scanf("%d", &b);
                if(a<b){
                    quoziente=a;
                    b=a;
                    a=quoziente;
                }
            }while(b>a);
        quoziente=a;
        while(quoziente!=0){
            quoziente=quoziente/b;
            cnt++;
        }printf("A è divisibile per b %d volte\n", cnt);
    return 0;
}