#include <stdio.h>

int main() {
    for (int y = 1; y <= 10; y++) {
        for (int x = 1; x <= 10; x++) {
            if (y == 1 || y == 10) {
                printf("* ");
            } else if (y == 2 && x == 9) {
                printf("* ");
            } else if (y == 3 && x == 8) {
                printf("* ");
            } else if (y == 4 && x == 7) {
                printf("* ");
            } else if (y == 5 && x == 6) {
                printf("* ");
            } else if (y == 6 && x == 5) {
                printf("* ");
            } else if (y == 7 && x == 4) {
                printf("* ");
            } else if (y == 8 && x == 3) {
                printf("* ");
            } else if (y == 9 && x == 2) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
