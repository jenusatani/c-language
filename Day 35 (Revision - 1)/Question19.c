#include<stdio.h>

main(){
    int number,sum = 0;

    printf("Enter number to sum of natural number : ");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++)
    {
        /* code */
        sum += i;
    }
    printf("sum of natural number is : %d",sum);
    
}