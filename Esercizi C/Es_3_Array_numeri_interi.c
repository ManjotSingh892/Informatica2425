/*
Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>
int array[];
int *dim;

void menu(){
    cost n=0;
    do{
        switch (n)
        {
        case n==1:
            void realloc();
            break;
        case n==2:
            void mostra();
            break;
        case n==3:
            void cerca();
            break;
        case n==4:
            void ordinamento();
            break;
        case n==5:
            void elimina();
            break;
        case n==6:
            return 0;
        
        default:
            break;
        }
    }while(n>=1&&n<=6&&n!=6);
}

void realloc(){
    int val=0;
    printf("Inserisci un numero nel array\n");
    scanf("%d", &val);
    array = (int *)realloc(array, *val * sizeof(int));
    if(array==NULL){
        return 1;
    }
    for(int i=0; i<*dim;i++){
        array[i]=val;
        val=0;
    }
}

void mostra(){
    for(int i=0; i<*dim; i++){
        printf("%d", array[i]);
    }
}

void cerca(){
    int cerca=0;
    printf("Inserisci il numero che desideri cercare\n");
    scanf("%d", &cerca);

    for(int i=0; i<*dim; i++){
        if(array[i]==cerca){
            printf("Il numero cercato esiste e si trova nella posizione %d\n", i);
            return 0;
        }
      
    }
}

void ordinamento(){
    int temp=0;
    int cnt=0;
    for(cnt<=(*dim*(*dim))){
        for(int i=0; i<*dim; i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                temp=0;
                cnt++;
            }
        }
    }
}

void elimina(){
    int elimina=0;
    printf("Inserisci il numero che desideri eliminare\n");
    scanf("%d", &elimina);

    for(int i=0; i<*dim; i++){
        if(array[i]==elimina){
            printf("Il numero  esiste e si trova nella posizione %d\n", i);
            printf("Il numero da eliminare è stato eliminato\n");
            array[i]=0;
            return 0;
        }
    }
}


int main(){
    menu();


    return 0;
}