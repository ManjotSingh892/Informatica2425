/*14 Scrivi un programma che visualizzi i primi 12 multipli di un numero n inserito da tastiera usando un ciclo a conteggio.*/
#include <stdio.h>
int main(){
        int n1=0;
            printf("Inserisci un numero\n");
            scanf("%d", &n1);
                for (int i = 1; i <=12; i++)
                {
                    printf("%d\n", n1*i);
                }

            






    return 0;
}