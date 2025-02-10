/*Crea il gioco Tris in C*/
#include <stdio.h>
void scelta(char *giocatore1, char *giocatore2);


int main(){
    char giocatore1;
    char giocatore2;

    scelta(&giocatore1, &giocatore2);


    

    for(int i=1; i<=11; i++){
        for(int cnt=1; cnt<=11;cnt++){
            if(cnt!=4&&cnt!=8&&i!=4&&i!=8){
                printf("   ");
            }else
            {
                printf(" * ");
            }
            
        }printf("\n");
    }



    return 0;
}
void scelta(char *giocatore1, char *giocatore2){

    do{
        printf("Giocatore 1: Scegli tra X o O\n");
        scanf("%c", &giocatore1);
        if(*giocatore1=='x'){
            *giocatore2='o';
        }else if(*giocatore1=='o')
            {
                *giocatore2='x';
            }
    }while(*giocatore1!='x' && *giocatore1!='o');
    return{
    pritnf("giocatore1: %c\t", giocatore1);
    pritnf("giocatore2: %c\n", giocatore2);
    };

}
