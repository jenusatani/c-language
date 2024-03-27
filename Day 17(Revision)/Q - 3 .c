#include <stdio.h>

int main() {
    int rows = 5;
    int a, j, s;

    for (a = 0; a < rows; a++) {
        for (j = 0; j < rows - a - 1; j++) {
            printf("  ");
        }

        for (j = rows - a; j <= rows; j++) {
            printf("%d ", j);
        }

        for (s = rows - 1; s >= rows - a; s--) {
            printf("%d ", s);
        }

        printf("\n");
    }

    return 0;
}