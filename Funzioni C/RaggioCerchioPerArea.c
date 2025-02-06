/*Dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
const float  pi=3.14;
void circonferenza(int *circonferenza);
void areacerchio(int *area);
int main(){
    int r=0;
    int area=0;
    int circonferenza=0;
        do{
            printf("Inserisci un valore da dare al raggio\n");
            scanf("%d", &r);
        }while(r<=0);
        
        area=areacerchio(*area);
        printf("Area: %d", area);
        circonferenza=circonferenza(int *circonferenza);
        printf("Circonferenza: %d", circonferenza);

    return 0;
}
void circonferenza(int *circonferenza){
    *circonferenza=2*pi*r;
    return *;
}
void areacerchio(int *area){
    *area=pi*(r*r);
    return *area;

}
