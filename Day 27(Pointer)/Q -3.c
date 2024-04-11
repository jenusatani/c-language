#include<stdio.h>


max(int *num1 , int *num2){

    int *g;

    g = num1;
    num1 = num2;
    num2 = g;


    printf("a is : %d\n",*num1);
    printf("B is : %d",*num2);
    

}

main(){
    int a,b;

    printf("Enter Frist Value : ");
    scanf("%d",&a);

    printf("Enter Second Value : ");
    scanf("%d",&b);

    max(&a , &b);
}