#include<stdio.h>


max(int *num1 , int *num2){

    if (*num1 > *num2)

    {
        /* code */
        printf("minimum is : %d",*num2);
    }else{
        printf("minimum is : %d",*num1);
    }
    

}

main(){
    int a,b;

    printf("Enter Frist Value : ");
    scanf("%d",&a);

    printf("Enter Second Value : ");
    scanf("%d",&b);

    max(&a , &b);
}