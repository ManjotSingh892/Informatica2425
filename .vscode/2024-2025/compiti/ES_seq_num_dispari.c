/*Esercizio 1
Leggere una sequenza di numeri. Terminare la lettura quando si incontra un numero dispari e stampare quanti numeri sono stati letti.*/
#include <stdio.h>
int main(){
    int num;
    int cnt=0;
    int dispari;
    int uguale;

        do
        {
            printf("Inserisci un numero\n");
                scanf("%d", &num);
            cnt++;
            if(num%2!=0){
                dispari=num;
                num=num/2;
                uguale=num;
                printf("Il numero dispari è: %d\n", dispari);
                printf("Sono stati letti %d numeri\n", cnt);
                


            }
            else    
                printf("Il numero inserito era pari\n");  







        } while (uguale!=num);




    return 0;
}