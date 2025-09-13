/*stampa i primi N numeri dispari successivi ala numero A*/
#include <stdio.h>
int main(){
    int n=0;
    int a=0;
    int s=0;
    do{
        printf("Inserisci un numero da assegnare ad A\n");
        scanf("%d", &a);
        printf("Inserisci un numero\n");
        scanf("%d", &n);
    }while(n<0&&a<0);
        s=n;
        for(int cnt=1; cnt<=n; cnt++){
            if(a%2!=0){
                s=s+2;
            printf("%d\n", s);
        }else{
            s=s+1;
        }
        }


    return 0;
}