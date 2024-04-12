#include<stdio.h>

swap(int *num1 ,int *num2 ,int *num3){
    
    int *temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp;

    printf("First Value is : %d\n",*num2);
    printf("Second Value is : %d\n",*num1);
    printf("Thrid Value is : %d\n",*num3);
       
}

main(){
    int *nu1 , *nu2 , *nu3;

    printf("Enter First Number : ");
    scanf("%d",&nu1);

     printf("Enter Second Number : ");
    scanf("%d",&nu2);

     printf("Enter Third Number : ");
    scanf("%d",&nu3);

    swap(&nu1,&nu2,&nu3);
}