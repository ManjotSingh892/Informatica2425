/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.
Vedi pag 160*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1=0;
    int t1=1, t2=0;

    int dopo;
    int i=1;
        printf("Inserisci un numero maggiore di 3: ");
        scanf("%d", &n1);
        
        while(n1<=3){
            printf("Il numero deve essere maggiore di 3. Prova di nuovo");
            scanf("%d", &n1);
        }
        while(i<=n1){
            dopo=t1+t2;
            printf("%d\n", dopo);
            t1=t2;
            t2=dopo;
            i++;
        }


    return 0;
}