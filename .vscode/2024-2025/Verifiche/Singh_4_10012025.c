/*Esercizio4
Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/

#include <stdio.h>
int main(){
    int n=0;
    int n1=0;
    int t1=0;
    int t2=0;
     char scelta;


        printf("Stampare i valori in senso crescente o decrescente?\n");
        printf("Scrivi C per crescente oppure D per decrescente\n");
        scanf("%c", &scelta);
        


        switch (scelta=='C'||scelta=='D')
        {
        case 'C':{
            n1=-999;
            for(int i=1; n!=0; i++){
                printf("Inserisci un numero\n");
                scanf("%d", &n);
                if(n>n1){
                    printf("%d", n);
                    n1=n;
                }
                t1=i;
            }printf("Il numero di numeri inseriti è %d", t1);
            }
            break;

        case'D':{
        n1=999;
            for(int cnt=1; n!=0; cnt++){
                printf("Inserisci un numero\n");
                scanf("%d", &n);
                if(n<n1){
                    printf("%d", n);
                    n1=n;
                }
                t2=cnt;
            }printf("Il numero di numeri inseriti è %d", t2);
        }
            break;
        default:
            break;
        }



    return 0;
}