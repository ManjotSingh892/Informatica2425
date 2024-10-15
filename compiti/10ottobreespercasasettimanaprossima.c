/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/
#include <stdio.h>
int main(){
    int g;
    int m;
    int a;
    int g2;
    int m2;
    int a2;
    int bisestile=0;

    //richiesta date//
        printf ("Inserisci il giorno della data numero 1\n");
        scanf ("%d", &g);
        printf ("Inserisci il mese della data numero 1\n");
        scanf ("%d", &m);
        printf ("Inserisci l'anno della data numero 1\n");
        scanf ("%d", &a);

        printf ("Inserisci il giorno della data numero 2\n");
        scanf ("%d", &g2);
        printf ("Inserisci il mese della data numero 2\n");
        scanf ("%d", &m2);
        printf ("Inserisci l'anno della data numero 2\n");
        scanf ("%d", &a2);
//controllo data//

    
        //CONTROLLO// //bisistile QUANDO MULTIPLO DI 4 MA NON DI 100 E 400// //if (anno%4==0&&anno%100!=0&&anno%400!=0)//
        if(a%100==0){
            if (a%400==0){
                printf("L'anno è bisestile\n");
                bisestile=1;
            }
        }
        else{
            if (a%4==0){
                printf("L'anno non è bisestile\n");
                bisestile=1;
            }
            //controllo del mese//
            if(m>0&&m<13){
                if (m==2){
                    if(g>=1 && g<=28+bisestile){
                        printf("\nLa data è accettabile\n");
                    }
                }
            else{
                if(m==11 || m==4 ||m==6 ||m==9){
                    if (g>=1 && g<=30){
                        printf("La data è accettabile\n");
                    }
                    else{
                        printf("la data non è accettabile\n");
                    }
                    if (g>=1 && g<= 31){
                        printf("La data è accettabile\n");
                    }
                    else{
                        printf("La data non è accettabile\n");
                    }
                }
            }
            }
        }
    





        if(a>a2)
            printf("La prima data è la più recente\n");
        if(a==a2)
            if (m>m2)
                printf("La prima data è la più recente\n");
        if(a==a2)      
            if(m==m2)
                if(g>g2)
                printf("La prima data è la più recente\n");

                if(a<a2)
            printf("La seconda data è la più recente\n");
        if(a==a2)
            if (m<m2)
                printf("La seconda data è la più recente\n");
        if(a==a2)      
            if(m==m2)
                if(g<g2)
                printf("La seconda data è la più recente\n");

        if(a==a2)      
            if(m==m2)
                if(g==g2)
                printf("La prima data e la seconda sono identiche\n");
        return 0;
}
