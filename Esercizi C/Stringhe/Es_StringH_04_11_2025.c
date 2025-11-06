/*

Codice fiscale

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;
typedef int*  vettore;

void Malloc(string stringa, int dim){
    stringa=(char*)malloc(stringa, dim+1*sizeof(char));
}

void Realloc(string stringa, int NewDim){
    stringa=(char*)realloc(stringa, NewDim*sizeof(char));
}

int CodiceFiscale(string nome, string cognome, int anni, char mese, int giorno, vettore CodComune, char Controllo){
    int maxD=20;



}



int Cognome(string cognome, int maxD){     //Sistemare la funzione 
    int cntC=0;
    int cntV=0;
    int j=0;
    fgets(cognome, maxD, stdin);
    int lenCognome=strlen(cognome);
    char CCC[3];


    for(int i=0; i<lenCognome; i++){        //corregere le if e rifare i for 
        if(cognome[i]!='a' && 'e' && 'i' && 'o' && 'u'&&cntC<3){
            cntC++;
            CCC[j++]=cognome[i];
        }else{
            cntV++;
        }
    }
    for(int i=0; i<lenCognome; i++){
        if(cntC>2){
            
        }else if(cntV>2){
            CCC[j++]=cognome[i];
        }
    }
    return cognome;
}        


int Nome(string nome, int maxD){
    int lenNome=strlen(nome);
    int cntCnome=0;
    fgets(nome, maxD, stdin);
    for(int i=0; i<lenNome;i++){
        if(nome[i]!='a'&&nome[i]!='e'&&nome[i]!='i'&&nome[i]!='o'&&nome[i]!='u'){
            cntCnome++;
        }
    }
    if(cntCnome>=4){
        NNN[0]=nome[0];
        NNN[2]=nome[2];  
        NNN[3]=nome[3];          
    }

}

int età(vettore anni){      //va bene
    vettore anni2;
    anni2[0]=anni[2];
    anni2[1]=anni[3];
}

int mese(){


}


int Controllo(){

    
}

void InserimentoDati(vettore anni, int giorno){     //va bene
    int cntAnno=0;
    bool genere=0;
    do{
        if(cntAnno==0){Printf("Inserisci l'anno di nascita\n");}
        scanf("%d", anni[cntAnno]);
        cntAnno++;

    }while(cntAnno<3);

    do{
        printf("Inserisci il sesso\n")
        scanf("%d", &genere);
    }while(genere!=0&&genere!=1);

    do{
        printf("Inserisci il giorno di nascita\n");
        scanf("%d", &giorno);
    }
    if(genere==0){giorno=giorno+40};
}       //va bene 


int main(){
    string cognome;
    string nome;
    vettore anni;
    string NNN;
    int anno;
    char mese;
    int giorno;
    vettore CodComune[]={71186}; //71=G in Ascii
    char Controllo;






    return 0; 
}