#include <stdio.h>
long fattorialeNumero(int _N);
int main(){
    long fatt;
    int n=0;
    do{
        printf("Inserisci un numero\n");
        scanf("%d", &n);
    }while(n<=0);

    fatt=fattorialeNumero(n);
    printf("Il fatotriale del numero %d è %ld", n, fatt);


    return 0; 
}
long fattorialeNumero(int _N){
    int i;
    int fatt=1;
    for(i=1; i<=_N; i++){
        fatt*=i;
    }
    return fatt;
}