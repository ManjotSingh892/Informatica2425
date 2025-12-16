/*Stabilire se un numero è dispari
Controllando l'ultima cifra meno senificativa*/

#include <stdio.h>
int main(){
        int numero;
        int unita;
        printf("Inserisci un numero");
        scanf("%d", &numero);
        unita=(numero%10);
        {
        if (unita%2==0){
            printf("Il valore è pari");
        }
        else
        
         printf("Il valore è dispari");
        }






















        return 0;



}     

