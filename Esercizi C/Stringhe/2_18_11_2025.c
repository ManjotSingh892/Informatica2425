/*
Trova un sotto stringa dentro ad una stringa 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;
int main(){
    string s;
    string ss;

    pritnf("Inserisci la prima stringa:\n");
    fgets(s, 50, stdin);
    printf("Inserisci la sottostringa:\n");
    fgets(ss, 20, stdin);
    int len= strlen(s);
    int ss;

    for(int i=0; i<len; i++){
        if(ss[i]==s[i]&&ss[i+len-1]==s[i+len-1]){
            ss++;
        }

    }if(ss==len-1){
        printf("Stringa trovata\n");
    }else{
        pritnf("Non trovata\n");
    }



    return 0; 
}