/*Esercizio2
Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int n=0;
    int n1=0;
    int somman=0;
    int somman1=0;
        do{
            printf("Inserisci un numero\n");
            scanf("%d", &n);
            printf("Inserisci un numero\n");
            scanf("%d", &n1);

        }while(n1<0||n<0);

            for(int i=1; i<=n; i++){
                if(n%i==0){
                    somman=somman+i;
                }

            }
            for(int cnt=1; cnt<=n1; cnt++){
                if(n1%cnt==0){
                    somman1=somman1+cnt;
                }

            }
            
            if(somman1==somman){
                printf("%d e %d sono numeri Amici", n, n1);
            }else{
                printf("Non sono numeri Amici");
            }

    return 0;
}