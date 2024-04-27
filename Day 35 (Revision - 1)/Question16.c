#include<stdio.h>

main(){
    int number,fact = 1;

    printf("Enter any number : ");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++)
    {
        /* code */
        fact *= i;
    }

    printf("%d",fact);
    
}