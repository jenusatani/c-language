#include<stdio.h>

main(){

    int num;
    int fact =1;

    printf("Enter any number :");
    scanf("%d",&num);

    for(int i=1 ; i<=num; i++)
    {
        fact *= i;

        
    }

    printf("%d \n",fact);
}