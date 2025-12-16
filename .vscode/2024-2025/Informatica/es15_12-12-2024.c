/*Dati n numeri in input (con N chiesto all' utente strettamente maggiore di 5), calcolare e mstrare la somma dei numeri negativi e dei numeri positivi*/
#include <stdio.h>
int main(){
    int n=0;
    int n1=0;
    int sommap=0;
    int somman=0;
        while(n<=5){
            printf("Inserisci un valore da dare ad N\n");
            scanf("%d", &n);
        }
        for(int cnt=0; cnt!=n; cnt++){
            printf("Inserisci un numero\n");
            scanf("%d", &n1);
            if(n1>=0){
                sommap = sommap+n1;
            }
            else if(n1<0){
                somman=somman+n1;
            }
        }   printf("Somma positiva: %d\n", sommap);
            printf("Somma negativa: %d\n", somman);
    return 0;
}


