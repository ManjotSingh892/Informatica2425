/*11 Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/
#include <stdio.h>
int main(){
    int n1=0;
    int n2=0;

            while(n1<=0||n2<=0){
                printf("Inserisci un numero\n");
                scanf("%d", &n1);
                printf("Inserisci un numero\n");
                scanf("%d", &n2);
                printf("Il prodotto è di %d\n\n\n", n1*n2);
            }for(int prodotto=0; prodotto!=n1*n2; prodotto=prodotto+n1){

                
                printf("+%d", n1);

            }


        


    return 0;
}