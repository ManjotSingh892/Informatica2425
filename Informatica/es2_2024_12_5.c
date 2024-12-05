/*dati N numeri sommarli quattro a quattro
termina quando si introduce un 0*/ 
#include <stdio.h>
int main(){
    int n1, n2, n3, n4;
    int somma;
    int cnt=0;
    int cntt=0;
        do{
        while(cnt<4){
            printf("Inserisci un numero\n");
            scanf("%d", &n1);

            if(n1!=0){
                printf("Inserisci un numero\n");
            scanf("%d", &n2);
            cnt++;
            if(n2!=0){

            printf("Inserisci un numero\n");
            scanf("%d", &n3);
            cnt++;
            if(n3!=0){

            printf("Inserisci un numero\n");
            scanf("%d", &n4);
            cnt++;
            if(n4!=0){
                cnt++;
                somma=n1+n2+n3+n4;
                printf("La somma è: %d", somma);


            }else{
                printf("Hai inserito 0\n");
                cntt++;

            }
            }else{
                printf("Hai inserito 0\n");
                cnt++;
            }
            }else
            {
                printf("Hai inserito 0\n");
                cntt++;
            }

            }else
            {
                printf("Hai inserito 0\n");
                cntt++;
            }

        }
        }while(cntt<1);
        return 0;
}
        
    

