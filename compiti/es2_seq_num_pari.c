/*Esercizio 2
Leggere una sequenza di numeri. Terminare la lettura quando si incontra un numero pari, comunicare quanti valori uguali a 0 si sono presentati.*/
#include <stdio.h>
int main(){
    int num;
    int cnt=0;
    int pari;
    int uguale;

        do
        {
            printf("Inserisci un numero\n");
                scanf("%d", &num);
            if(num%2!=0||num==0){
                printf("Il numero inserito é dispari\n");
                    if(num==0){
                    cnt++;
                    }

            }
            else
            {
                pari=num;
                num=num/2;
                uguale=num;
                printf("Il numero pari è: %d\n", pari);
                printf("Sono stati letti %d zeri:\n", cnt);
            }




        } while (uguale!=num);




    return 0;
}








