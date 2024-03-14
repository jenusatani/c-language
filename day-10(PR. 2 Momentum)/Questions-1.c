#include<stdio.h>

main(){

    int number;

    printf("Enter any number");
    scanf("%d",&number);

    (number % 2 == 0) ? printf("Number %d is even",number) : printf("Number %d is odd",number);

    return 0; 




}
