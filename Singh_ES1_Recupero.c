
/*Esercizio1
GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int anno;
    int mese;
    int giorni;
    int data;
    int flag=0;
        srand(time(NULL));
        anno=rand()%24+2000;
        mese=rand()%11+1;
    
//anno bisestile se divisibile per 4 ma non per 100 oppure se divisibile per 400//
        printf("La data generata è: %d_%d_%d\n", giorni, mese, anno);
        if(anno%400==0&&anno==2){
            printf("L' Anno è bisestile\n");
            giorni=rand()%27+1;
            flag=1;
            if(flag=1){

                if(giorni>10){

                    mese=mese+1;
                    if(mese==12&&giorni>10){
                        anno=anno+1;
                        printf("La data di consegna è: %d_%d_%d\n", giorni, mese, anno);   
                    }

                }
            }
        }
        if(flag==0){
            giorni=rand()%30+1;
                if(giorni<=10){
                    giorni=giorni+20;
                    printf("La data di consegna è: %d_%d_%d\n", giorni, mese, anno);
                }
                if(giorni>10){
                    giorni=giorni+20-30;
                    mese=mese+1;
                    if(mese==12&&giorni>10){
                        anno=anno+1;
                        printf("La data di consegna è: %d_%d_%d\n", giorni, mese, anno);   
                    }

                }
                    if(mese==2){

                    if(giorni>10){
                        giorni=giorni+20-29;
                        mese=mese+1;
                        if(mese==12&&giorni>10){
                            anno=anno+1;
                            printf("La data di consegna è: %d_%d_%d\n", giorni, mese, anno);   
                        }

                }




                    }
            

        }





    return 0;
}