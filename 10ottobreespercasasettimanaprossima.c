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
