/**/
#include <stdio.h>
int main(){
    int n1=0;
    int n2=0;
    int num1=0;
    int num2=0;
    int cifre=0;
    int pari=0;
    int cifre2=0;
    int c=0;
    int a=0;
    do{
        printf("Inserisci due numeri con lo stesso numero di cifre\n");
        scanf("%d", &n1);
        scanf("%d", &n2);
        
        num1=n1;
        num2=n2;
        

        for(int i=1; n1!=0; i++){
            n1=n1/10;
            cifre=i;
        }

        for(int cnt=1; n2!=0; cnt++){
            n2=n2/10;
            cifre2=cnt;
        }
        c=cifre;
    }while(cifre!=cifre2);

        cifre2=0;
        cifre=0;


for(int z=1; z<=c&&num1!=0&&num2!=0;z++){
        if(z%2!=0){
            cifre=num1%10;
            num1=num1/10;
            printf(" %d ", cifre);
        }else{
            num2=num2/10;
        }
            cifre2=num2%10;
            num2=num2/10;
            printf(" %d ", cifre2);

    }

        

    return 0;
}