/*Convertire da decimale a binario*/

#include <stdio.h>
#include <math.h>

int main(){   
    long converti(int _n);//parametro formale//
    int n=0;
    long conv=0;
        do{        
            printf("Inserisci un numero\n");
            scanf("%d", &n);
            }while(n<=0||n>254);
        conv=converti(n);
        pritnf("ld ", conv);

        

        




    return 0;
}
long converti(int _n){
    int i;
    int quoziente=_n;
    int cnt=1;
    int binario=0;
    int _conv=0;
    int resto=0;

        /*while(quoziente!=0){
            if(cnt==1){
                binario=binario+(quoziente%2*10);
            }else{
                binario=binario+(quoziente%2*10);
                quoziente=quoziente/2;                 
            }*/
        
        while(quoziente!=0){
            resto=quoziente%2;
            quoziente=quoziente/2;
            _conv=pow(10, cnt);
            cnt++; 
        }



     
        return _conv;

}