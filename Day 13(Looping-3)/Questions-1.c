#include<stdio.h>

main(){

    int num,sum =0;

    printf("Enter Number :");
    scanf("%d",&num);

    for(int i=1 ; i<=num ; i++)
    {
        sum += i;
        printf("%d \n",sum);
    }
}