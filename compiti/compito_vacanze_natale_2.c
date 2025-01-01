#include <stdio.h>
int main(){
    int n=0;
    int successivo=1;
        printf("Inserisci un valore\n");
        scanf("%d", &n);
            for(int i=1; i<=n; i++){
                for(int cnt=1; cnt<=n; cnt++){
                    if(i%2!=0){
                        printf("%d\t", successivo);
                        successivo++;

                    }else{
                        successivo--;
                        printf("%d\t", successivo);
                    }
                }
                    successivo=successivo+n;
                    printf("\n");
                }
            
            






    return 0;
}