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
            CCC[i]=cognome[i];
        }
    }
    return cognome;
}        




int Nome(string nome, int maxD){
    fgets(nome, maxD, stdin);

}

int età(int anni){      //va bene
    vettore anni;
    vettore anni2;
    anni2[0]=anni[2];
    anni2[1]=anni[3];
}

int mese(){


}

int giorno(){


}

int Controllo(){

    
}


int main(){
    string cognome;
    string nome;
    int anno;
    char mese;
    int giorno;
    string CodComune[]={71186}; //71=G in Ascii
    char Controllo;






    return 0; 
}