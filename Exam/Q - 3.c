#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j > i; j--) {
            printf("_ ");
        }

        for (int k = 0; k < i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}