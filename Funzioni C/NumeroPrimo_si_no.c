/*Esercizio 2
Scrivete una funzione con parametro un intero n(passato per valore) che stabilisca se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0.  
*/
#include <stdio.h>
int nprimo(int n);
int main(){
    int n=0;
    int risultato;
        do{printf("Inserisci un numero\n");
        scanf("%d", &n);
        }while(n<=0);
        
        risultato=nprimo(n);
        printf("%d", risultato);


    
    return 0;
}
int nprimo(int n){
    int i;

    for(i=2; i<n;i++){
        if(n%i==0){
            return 0;
        }

}return 1;
}