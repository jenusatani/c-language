#include <stdio.h>

main() {
    int number, count = 0, i = 1;

    printf("Enter any number: ");
    scanf("%d", &number);

    do {
        if (number % i == 0) {
            count++;
        }
        i++;
    } while (i <= number);

    if (count == 2) {
        printf("prime\n");
    } else {
        printf("not prime\n");
    }
}
