/*Fai un matrice spirale*/
/*1 2 3 
  8 9 4
  7 6 4 */


#include <stdio.h>
#define dim 5
void mostra(int matrice[dim][dim], int righe, int colonne) {
    int r;
    int c;
    for (r=0;r<righe;r++) {
        for (c=0;c<colonne;c++) {
            printf("%d ", matrice[r][c]);
        }
        printf("\n");
    }
}
void riempi(int matrice[dim][dim], int righe, int colonne) {
    int numero = 1
    int alto=0;
    int basso=righe-1;
    int sinistra=0;
    int destra=colonna-1;
    int r;
    int c;
    while (alto<=basso&&sinistra<=destra) {
        for(c=sinistra;c<=destra;c++){
            matrice[alto][c]=numero++;
            alto++;
        }

        for(r=alto;r<=basso;r++){
            matrice[r][destra] = numero++;
            destra--;
        }

        for(c=destra;c>=sinistra&&alto<=basso;c--){
            matrice[basso][c]=numero++;
            basso--;
        }

        for(r=basso;r>=alto&&sinistra<=destra;r--){
            matrice[r][sinistra] = numero++;
            sinistra++;
        }
    }
}
int main() {
    int matrice[dim][dim];
    int righe, colonne;
    printf("Righe max %d\n", dim);
    scanf("%d", &righe);
    printf("Colone max %d\n", dim);
    scanf("%d", colonne);
    riempi(matrice, righe, colonne);
    mostra(matrice, righe, colonne);
    return 0;
}
