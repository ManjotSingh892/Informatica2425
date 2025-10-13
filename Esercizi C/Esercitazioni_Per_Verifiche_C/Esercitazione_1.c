#include<stdio.h>

int Richiesta_Num_Studenti(){
    int n=0;
    do{
            printf("Inserisci il numero degli studenti che devo salvare: \n");
            scanf("%d", &n);

    }while(n<0||n>10);

}

void Malloc(int Voti, int Studenti){
    Voti=(int *)malloc(10*sizeof(int));
    if(Voti==NULL){
        printf("Errore di allocazione, il programma termina\n");
        return 1;
    }
}

void Realloc(int Voti, int Studenti_Con_Valutazione){




}


void Inserisci_Voti(int *Voti){
    int voto=0;
    int flag=1;
    int contatore=0;
    do{
            do{
                pritnf("Inserisci il voto dello studente: \n");
                scanf("%d", &voto);

            }while(voto<0||voto>30);

            for(int i=0; i<sizeof(*Voti)/sizeof(int)){

                *Voti[i]=voto;
                contatore++;
            }

            do{
                    printf("Vuoi continuare ad inserire voti?\n");
                    pritnf("Si: 1 \n N0: 0");
                    scanf("%d", &flag);
            }while(flag!=1&&flag!=0);


    }while(flag==1);

    *Voti= (int *)Realloc(contatore*sizeof(int));
}

int Calcola_Media(int *Voti){
    int somma=0;
    int media=0;
    int cnt=0;
    for( int i=0; i<sizeof(*Voti)/sizeof(int); i++){
        somma= somma + *Voti[i];
        cnt++;
    }
    media= somma/cnt;
    return media;


}

int main(){
    int *Voti;
    int Studenti_Con_Valutazione=0;
    int Studenti=Richiesta_Num_Studenti();
    Malloc(Voti, Studenti);





    return 0;
}