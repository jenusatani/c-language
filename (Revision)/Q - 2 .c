#include<stdio.h>

main() {
    int n, fact = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
        
    for (int i = 1; i <= n; i++) {
        fact = fact*i;  
    }

    printf("The factorial is : %d\n", fact);
}