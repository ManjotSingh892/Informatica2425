#include <stdio.h>
int main(){
    int n1, n2;
    char a;
    char s;
    char m;
    char d;
    char o;
    int risultato;
    printf("\nScegli che operazione vuoi fare tra a, s, m, d");
    scanf("%c", &o);
    printf("\nInserisci un numero");
    scanf("%d", &n1);
    printf("\nInserisci un numero");
    scanf("%d", &n2);
    switch (o)
    {
    case 'a':
        risultato=n1+n2;
        break;
    
    default:
        break;
    }

    switch (o)
    {
    case 's':
        risultato=n1-n2;
        break;
    
    default:
        break;
    }

    switch (o)
    {
    case 'm':
        risultato=n1*n2;
        break;
    
    default:
        break;
    }

    switch (o)
    {
    case 'd':
        risultato=n1/n2;
        break;
    
    default:
        break;
    }
    printf("\nIl risultato è: %d", risultato);










    return 0;
}