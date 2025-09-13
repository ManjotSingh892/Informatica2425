/*Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.*/

#include <stdio.h>
#define dim 3
float matrice[dim][dim];

void Inserire(){
    for(int r=0; r<dim; r++){
        for(int c=0; c<dim; c++){
            printf("Inserisci un valore\n");
            scanf("%f", &matrice[r][c]);
        }
    }
}

void Mostra(){
    for(int r=0; r<dim; r++){
        for(int c=0; c<dim; c++){
            printf("%f\t", matrice[r][c]);
        }printf("\n");
    }
}

void Scambio() {
    float temp = 0;
    for (int r = 0; r < dim; r++) {
        for (int c = 0; c < dim; c++) {
            if (r == c) {
                temp = matrice[r][c];
                matrice[r][c] = matrice[r][dim - 1 - c];
                matrice[r][dim - 1 - c] = temp;
            }
        }
    }
}


int main(){
    Inserire();
    Mostra();
    printf("\n\n\n");
    Scambio();
    Mostra();
    return 0;
}