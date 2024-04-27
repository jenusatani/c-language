#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;


    
    printf("Enter an integer: ");
    scanf("%d", &number);


    
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    
    printf("Reversed Number: %d\n", reverse);
    
    return 0;
}
