/*Esercizio 3
Leggere una sequenza di numeri interi. Terminare la letture quando si incontra un valore pari a zero. Determinare quanti sono stati i valori pari e i valori dispari.*/
#include <stdio.h>
int main(){
    int num;
    int cntp=0;
    int cntd=0;
    int pari;
    int uguale;

        do
        {
            printf("Inserisci un numero\n");
                scanf("%d", &num);
            if(num!=0){
                if(num%2==0){
                    while(num/2!=0){
                        num=num/2;
                    }  cntp++;  
                }
                else
                {
                    cntd++;
                }

            }
            else 
            {
                uguale=num;
                printf("Hai inserito uno zero\n");
                printf("Hai inserito %d numeri pari\n", cntp);
                printf("Hai inserito %d numeri dispari\n", cntd);
            }




        } while (uguale!=num);




    return 0;
}

