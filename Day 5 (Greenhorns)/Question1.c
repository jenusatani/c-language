#include<stdio.h>

main (){
    float original,percentage,discount;

    printf("Enter the original price :");
    scanf("%f",&original);


    printf("Enter the discount percentage :");
    scanf("%f",&percentage);


    discount = original * percentage / 100;

    printf("disconut : %f",discount);

}