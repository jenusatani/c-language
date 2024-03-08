#include<stdio.h>

main ()
{
    int num1;
    int num2;

    printf("Enter Your first number :");
    scanf("%d",&num1);

    printf("Enter Your second number :");
    scanf("%d",&num2);

    if(num1 < num2){
        printf("the mimimum value is %d",num1);
    }else{
         printf("the mimimum value is %d",num2);
    }

}