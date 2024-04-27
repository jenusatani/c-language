#include <stdio.h>

void main() {
    int num;


    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }
    }
}