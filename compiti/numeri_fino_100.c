//Scrivi un programma in C che faccia inserire dei numeri interi all'utente: il programma si deve fermare quando la somma dei numeri inseriti raggiunge 100 oppure quando sono stati inseriti 5 numeri. Alla fine mostrare il numero di valori inseriti dall'utente (usare contatore)//
#include <stdio.h>
int main(){
    int n1, n2, n3, n4, n5;
    int flag=0;
    int max;


    printf("Inserisci un numero");
        scanf("%d", &n1);
    if(n1==100){
        printf("Il valore è pari a 100");
        flag=1;
    }
  {
        if(flag==0)
        printf("Inserisci un numero");
            scanf("%d", &n2);
        if(n1+n2==100)
        printf("Il valore è pari a 100");
        flag=1;
    }

    {   if(flag==0)
        printf("Inserisci un numero");
            scanf("%d", &n1);
        if(n1+n2+n3==100)
        printf("Il valore è pari a 100");
        flag=1;
    }
{
        if(flag==0)
        printf("Inserisci un numero");
            scanf("%d", &n1);
        if(n1+n2+n3+n4==100)
        printf("Il valore è pari a 100");
        flag=1;
    }
{
        if(flag==0)
        printf("Inserisci un numero");
            scanf("%d", &n1);
        if(n1+n2+n3+n4+n5==100)
        printf("Il valore è pari a 100");
        flag=1;
    }

    {   
        if (max!=100)
        printf("Il valore di 100 non è stato raggiunto in 5 scelte");
    }
    




    return 0;
}