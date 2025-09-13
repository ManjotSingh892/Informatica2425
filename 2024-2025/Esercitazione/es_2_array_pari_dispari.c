/*
1) DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI
*/
#include <stdio.h>
#define DIM 10
int main(){
    int a[DIM];
    CaricaArray(a);
    StampaArray(a);
    PariDispari(a);



}
void CaricaArray(int a[]){
    for(int i=0; i<DIM; i++){
        do{
            printf("Inserisci un valore\n");
            scanf("%d", &a[i]);
        }while(a[i]<0);
    }
}

void StampaArray(int a[]){
    for(int i=0; i<DIM; i++){
        printf("%d\t", a[i]);
    }
}

void PariDispari(int a[]){
    int pari=0;
    int dispari=0;

    for(int i=0; i<DIM; i++){
        if(a[i]%2==0){
            pari++;
        }else{
            dispari++;
        }
    }printf("\nPari: %d \n Dispari: %d \n", pari, dispari);

}