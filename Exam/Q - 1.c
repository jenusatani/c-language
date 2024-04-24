#include <stdio.h>

main() {
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    
    int fact= 1;

   for (int i = 1; i <= number; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d\n",number,fact);

}