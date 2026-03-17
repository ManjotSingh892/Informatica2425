#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file= fopen("Struct_File.txt", "r");


    fclose(file);
    return 0;
}