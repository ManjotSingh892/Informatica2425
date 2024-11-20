/*Esercizio4
VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
int main(){
    int flag=0;
    int n1;
    int cnt=0;
    int quoz;
        printf("Inserisci un numero\n");
            scanf("%d", &n1);


            if(n1%2==0){  //se 8 diviso 2 il resto è 0//
                if(n1/2>0){
                    quoz=n1/2;
                    cnt++;
                    if(quoz/2>0){
                        quoz=quoz/2;
                        cnt++;
                        if(quoz/2>0){
                            quoz=quoz/2;
                            cnt++;
                            if(quoz/2>0){
                                quoz=quoz/2;
                                cnt++;
                                if(quoz/2>0){
                                    quoz=quoz/2;
                                    cnt++;
                                }
                            }
                        }
                    }
                }
                printf("Il numero inserito è 2 all %d\n", cnt);
            }
            else{
                printf("Il numero non è um multiplo di 2\n");
            }




    return 0;
}