#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void stampaVettore(int vettore[], int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vettore[i], sep);
    }
}
void riempiVettore(int vettore[], int dim){
    for(int i=0; i<dim; i++){
        printf("inserici l'elemento in posizione di %d: ", i);
        scanf("%d", &vettore[i]);
    }
}
void riempiVettoreCasuale(int vettore[], int dim, int minimo, int massimo){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vettore[i]=rand()%(massimo-minimo+1)+minimo;
    }
}

int contaOccorrenze(int vettore[], int dim, int valore){
    int cnt=0;

    for(int i=0; i<dim; i++){
        if(vettore[i] == valore){
            cnt++;
        }
    }
    return cnt;
}


int ricercaSequenziale(int *vettore, int dim, int valore){
    for(int i = 0; i<dim; i++){
        if(vettore[i]==valore){
            return i;
        }
    }
    return -1;

}

int ricercaBinaria(int vettore[], int dim, int estInf, int estSup, int valore){
    int media = (estSup+estInf)/2;
    if(estInf > estSup)
        return -1;
    if(vettore[media]== valore)
        return media;
    if(vettore[media] > valore)
        return ricercaBinaria( vettore,dim, estInf, media-1, valore);
    else 
        return ricercaBinaria( vettore,dim, media+1, estSup, valore);
}

void shiftDx (int vett[], int dim, int pos){
    for(int i=dim; i>pos; i--){
        vett[i]=vett[i-1];
    }
}
int trovaPosizione (int vett[], int dim, int num){
    int i=0;
    while(vett[i]<num && i<dim){
        i++;
    }
    return i;
}

void riempiVettoreOrdinatoCasuale(int vett[], int dim, int minimo, int massimo) {
    srand(time(NULL));
    int num, pos;
    vett[0] = rand()%(massimo-minimo+1)+minimo;
    for(int i=1; i<dim; i++){
        num = rand()%(massimo-minimo+1)+minimo;
        pos = trovaPosizione(vett, i, num); 
        shiftDx(vett, i, pos);
        vett[pos] = num;
    }
}
void caricaCasuale(int vett[], int dim, int min, int max){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vett[i]=rand()&(max-min)+min;
    }
}
void scambioVettori(int vett1[], int vett2[], int dim){
    int temp=0;
    for(int i=0; i<dim; i++){
        temp=vett1[i];
        vett1[i]=vett2[i];
        vett2[i]=temp;
    }


}
void caricaVett(int vett[], int dim){
    printf("Inserisci un valore");
    for(int i=0; i<dim; i++){

        scanf("%d", &vett[i]);
    }
}
void caricaBubble(int vett[], int dim){
    int temp=0;
    for(int i=0; i<dim-1;i++){
        for(int j=0; j<dim-i-1; j++){
            if(vett[j]>vett[j+1]){
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
    }
}
void scambioMinMax(int vett[], int dim){
    int min, max, tmp, i_min, i_max;

    min=vett[0];
    max=vett[0];
    for(int i=1; i<dim;i++){
        if(vett[i]<min){
            min=vett[i];
            i_min=i;
        }
        if(vett[i]>max){
            max=vett[i];
            i_max=i;
        }
    }
    vett[i_min]=max;
    vett[i_max]=min;
    


}