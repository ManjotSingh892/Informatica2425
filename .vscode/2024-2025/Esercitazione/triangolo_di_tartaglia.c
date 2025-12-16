#include <stdio.h>
int main(){
    int n=1;
    int somma=0;
        for(int i=1; i<=6;i++){
            for(int cnt=1; cnt<=6;cnt++){

                if(cnt<=i){
                    if(cnt==1||cnt==i){
                        printf("%d\t", 1);
                    }else{
                        printf("%d\t", n+i-2);
                        if(cnt==i&&i%2==0){
                            printf("%d", n+1);
                       
                        }else if(cnt==i&&i%2!=0){
                            printf("%d", n);
                        }
                        

                    }
                }else{
                    cnt=6;
                }


            }printf("\n");
        }

    return 0;
}