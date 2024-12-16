#include <stdio.h>
int main(){

    for(int y=1; y<=10; y++){
        for(int x=1; x<=10; x++){
            if(y==1||y==10){
                printf("*");
            }else if(y>=2&&y<=9){
                if(x==1||x==10){
                    printf("*");
                }else{
                    printf(" ");
                }
            }



        }printf("\n");
    }printf("\n");



    return 0;
}