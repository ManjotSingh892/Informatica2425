/*Esercizio3
DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n1, n2, k, confronto;

        srand(time(NULL));

        printf("Inserisci un numero\n");
            scanf("%d", &n1);
        printf("Inserisci un numero\n");
            scanf("%d", &n2);
        
        printf1. "La somma in valore assoluto\n");
            scanf("%d", &confronto);
            confronto=1;
        
        printf(2. "La differenza tra il  maggiore e il minore\n"){
            scanf("%d", &confronto);
            confronto=2;
        }
        printf(3. "Generato un valore k(intero) deternimare chi dei valori si avvicina di più\n"){
            scanf("%d", &confronto);
            confronto=3;
        }
        printf(4. "Uno è multiplo dell' altro\n"){
            scanf("%d", &confronto);
            confronto=4;
        }

        switch (confronto)
        {
        case 1:
            if(n1<0){
                n1=n1*(-1);
            }
            if(n2<0){
                n2=n2*(-1);
            }
            printf("La somma assoluta è:", (n1+n2));
            break;
        
        case 2:
            if(n1>n2){
                printf("La differenza tra il  maggiore e il minore è:", (n1-n2));
            }
            else
            {
                printf("La differenza tra il maggiore e il minore è:", (n2-n1));
            }
            break;

        case 3:
            k = rand()%999+0;
            if(n1-k==n2-k){
                printf("I due valori sono uguali\n");
            }
            if(n1-k>n2-k){
                printf("SI avvicina di più al primo numero");
            }
            else{}
                printf("Si avvicina di più il secondo numero");
            }



        case 4:
            if(n1%n2==0){
                printf("Il primo valore è il multiplo del secondo\n");
            }
            else{
                printf("Il secondo valore è il multiplo del primo\n");
            }
            else
            {
                if(n1%n2==0&&n2ù%n1==0)
                    prinf("I due valori sono uguali");
            }
        default:
            printf("Il valore selezionato non è corretto\n")
            break;
        }
        
    






    return 0;
}