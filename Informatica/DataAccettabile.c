/*Data una data in formato gg mm aaaa
 verificare se la data è accettabile*/
 #include <stdio.h>
 int main(){
    int gg;
    int mm;
    int anno;
    int bisestile=0;
    gg=0;
    mm=0;
    anno=0;
    
        printf("scrivi il giorno");
            scanf("%d", &gg);
        printf("scrivi il mese");
            scanf("%d", &mm);
        printf("scrivi il anno");
            scanf("%d", &anno);
        //CONTROLLO// //bisistile QUANDO MULTIPLO DI 4 MA NON DI 100 E 400// //if (anno%4==0&&anno%100!=0&&anno%400!=0)//
        if(anno%100==0){
            if (anno%400==0){
                printf("L'anno è bisestile");
                bisestile=1;
            }
        }
        else{
            if (anno%4==0){
                printf("L'anno non è bisestile");
                bisestile=1;
            }
            //controllo del mese//
            if(mm>0&&mm<13){
                if (mm==2){
                    if(gg>=1 && gg<=28+bisestile){
                        printf("\nLa data è accettabile");
                    }
                }
            else{
                if(mm==11 || mm==4 ||mm==6 ||mm==9){
                    if (gg>=1 && gg<=30){
                        printf("La data è accettabile");
                    }
                    else{
                        printf("la data non è accettabile");
                    }
                    if (gg>=1 && gg<= 31){
                        printf("\nLa data è accettabile");
                    }
                    else{
                        printf("La data non è accettabile");
                    }
                }
            }
            }
        }
       


            





    return 0;




 }