/*DATO UN NUMERO A PIù CIFRE
Eseguire la somma delle cifre e stabilire se è divisibile per 3*/
#include <stdio.h>
#include <math.h>
int main (){
    int numero;
    int cifra1;
    int cifra2;
    int cifra3;
    int divisione;
    int somma;
    printf("Inserisci un valore");
    scanf("%d", &numero);
    cifra1=(numero%10);
    cifra2=(numero%100);
    cifra3=(numero%1000);
    somma=(cifra1+cifra2+cifra3);
    if (somma !=0 )
        printf("Il risultato è divisibile per 3, quindi è dispari");
    
    if (somma % 3)!=0
        printf("Il risultato non è divisibile per 3, quindi non è dispari");
    return 0;
}