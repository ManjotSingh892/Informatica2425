/*calcolare il quoziente fra due numeri applicando il metodo delle sottrazioni successive*/
#include <stdio.h>
int main(){
        int quoziente=0;
        int n1, n2;
        int cnts=0;

            do{ 
                printf("Inserisci un numero\n");
                scanf("%d", &n1);
                printf("Inserisci un'altro numero\n");
                scanf("%d", &n2); 
                }while(n1<=0||n2<=0);            


                if(n1>n2){
                    quoziente=n1;
                        for(int cnt=1; quoziente >=n2; cnt++){

                            quoziente=quoziente-n2;
                            n1=n1-n2;
                            cnts=cnt;
                            
                        }   printf("Il numero delle sottrazioni è: %d\n", cnts);
                            printf("Il quoziente è %d\n", quoziente);
                }else if(n2>n1){
                    quoziente=n2;
                        for(int cnt=1; quoziente >=n1; cnt++){
                            quoziente=quoziente-n1;
                            n2=n2-n1;
                            cnts=cnt;
                            
                        }   printf("Il numero delle sottrazioni è: %d\n", cnts);
                            printf("Il quoziente è %d\n", quoziente);

                }



            return 0;




}