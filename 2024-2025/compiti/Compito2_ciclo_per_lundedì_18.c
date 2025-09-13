/*2) Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0 (cioè il programma termina quando viene inserito 0) 
e ne ricerca il valore minimo visualizzandolo sullo schermo.
*/
#include <stdio.h>
int main(){
    int n=0;
    int min=0;
    int temp=0;


            do{
            printf("Inserisci un numero\n");
                scanf("%d", &n);
            temp=n;
            if(temp==n){
            while(n!=0){
            if(n>temp&&n!=0){
                min=temp;
            }
            if(n<temp&&n!=0){
                min=n;
            }
            }
            }
            } while(min==n||min==temp);
                printf("Min:%d", min);
    return 0;

}
