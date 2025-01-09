//es 17 pag 223//
/*Numero perfetto: quando la somma dei sui divisori escluso se stesso è il numero stesso*/
//scrivi un programma che ricerca i primi tre numru perfetti e li visualizza sullo schermo//
//Esempio:n=6 div=1,2,3 somma=1+2+3=6//
//6-28-49677
#include <stdio.h>
int main(){
    int somm=0;

        for(int i=1; i<500; i++){
            for(int j=1; j<=i/2; j++){
                if(i%j==0){
                    somm+=j;
                }
                
            }
                if(somm==i){
                    printf("\nIl numero %d è perfetto", i);
                }   somm=0;

                
            }
             return 0;
}
              