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
    int n;
    int k=0;
    int temp;
    int num1, num2;
    int somma=0;
    srand(time(NULL));
    k=random()%999;

        printf("Inserisci un numero\n");
        scanf("%d", &num1);
        printf("Inserisci un numero\n");
        scanf("%d", &num2);
        printf("1.Somma in valore assoluto\n");
        scanf("%d", &n);
        printf("2.La differenza tra il maggiore e il minore\n");
        scanf("%d", &n);
        printf("3.Quale dei valori si avvicina di più\n");
        scanf("%d", &n);
        printf("4.Determina se uno è multiplo dell'altro\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            somma=(num1+num2);
            if(somma<0){
                somma=somma*(-1);
            }
            printf("La somma in valore assoluto è: %d", somma);
            break;
        case 2:
            if(num1>num2){
                temp=num1-num2;
            }
            else{
                temp=num2-num1;
            }
            else{
                printf("I due numeri sono uguali\n");
            }
            break;
        case 3:
            if(num1>=0&&num2>=0){
                if(num1-k>num2-k){
                    printf("Il secondo numero inserito è più vicino a K\n");
                }
                else
                {
                    printf("Il primo numero inserito si avvicina di più a K\n");
                }
                else if(num1-k==num2-k){
                    printf("I due numeri inseriti sono uguali\n");
                }

            }
            if(num1<0&&num2>=0){
                if(num1)
            }




            break;


        case 4:
            if(num1%num2==0){
                temp=num1/num2;
                temp=temp/num2;
                if(temp%num2==0){
                    printf("Il secondo numero è il  multiplo del primo\n");
                }
            }
            else{
                if(num2%num1==0){
                    temp=num2/num1;
                    temp=temp/num1;
                    if(temp%num1==0){
                        printf("Il primo numero è il multiplo del secondo\n");
                    }
                }
                else
                {
                    printf("I due numeri inseriti sono uguali\n");
                }
            }






        
        default:
            break;
        }





    return 0;
}