
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
        anno=rand()%2000+24;
        mese=rand()%1+11;
    
//anno bisestile se divisibile per 4 ma non per 100 oppure se divisibile per 400//
        printf("La data generata è: %d_%d_%d\n", giorni, mese, anno);
        if(anno%400==0&&anno==2){
            printf("L' Anno è bisestile\n");
            giorni=rand()%0+28;
            flag=1;
            if(flag=1){

                if(giorni>10){
                    giorni=giorni+20-28;
                    mese=mese+1;
                    if(mese==12&&giorni>10){
                        anno=anno+1;
                        printf("La data di consegna è: %d_%d_%d\n", giorni, mese, anno);   
                    }else if(anno>2024){
                        printf("Sei nel 2025\n");
                        
                    }

                }
            }
        }
        if(flag==0){
            giorni=rand()%1+30;
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
                    }else if(anno>2024){
                        printf("Sei nel 2025\n");
                        
                    }

                }
            

        }





    return 0;
}