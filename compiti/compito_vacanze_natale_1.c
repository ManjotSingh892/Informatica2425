//esercizio numero 1 delle vacanze di natale//
#include <stdio.h>
int main(){
    //dichiare e dò un valore alle mie costanti che sono i prodotti del distributore automatico//
    int const acqua1=50;
    int const coca2=90;
    int const pepsi3=100;
    int const the4=55;
    int const succo5=120;

    int dapagare=0;
    int val=0;
    int moneta=0;
    int pagato=0;


            printf("1: Acqua\n");
            printf("2: Coca Cola\n");
            printf("3: Pepsi\n");
            printf("4: Thè\n");
            printf("5: Succo di frutta\n");

            do{
                scanf("%d", &val);
            }while(val>5||val<1);


            switch (val)
            {
            case 1:
                dapagare=acqua1;
                break;
            case 2:
                dapagare=coca2;
                break;
            case 3:
                dapagare=pepsi3;
                break;
            case 4:
                dapagare=the4;
                break;
            case 5:
                dapagare=succo5;
                break;
            default:
                break;
            }

            printf("Il costo della bevanda scelta è di %d cetesimi\n", dapagare);
            do{
                printf("Inserisci le monete\n");
                scanf("%d", &moneta);
                if(moneta==1||moneta==50||moneta==5||moneta==10||moneta==20){
                    pagato=pagato+moneta;
                    printf("Totale inserito: %d centesimi\n", pagato);


                }else{
                    moneta=0;
                    printf("La moneta inserita non è valida\n");
                }

            }while(pagato<dapagare);

            if(pagato>dapagare){
                pagato=pagato-dapagare;
                printf("Il resto è di %d centesimi\n", pagato);
            }else{

            if(pagato%50==0){
                pagato=pagato/50;
                printf("Resto: %d monete da 50\n");
            }else{

            if(pagato%20==0){
                pagato=pagato/20;
                printf("Resto: %d monete da 20\n");
            }else{

            if(pagato%10==0){
                pagato=pagato/10;
                printf("Resto: %d monete da 10\n");
            }else{

            if(pagato%5==0){
                pagato=pagato/5;
                printf("Resto: %d monete da 5\n");
            }else{

            if(pagato%1==0){
                pagato=pagato/1;
                printf("Resto: %d monete da 1\n");
            }
            }
            }
            }
            }
            }






    return 0;
}