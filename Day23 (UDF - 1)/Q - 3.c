#include<stdio.h>


     addnumber(float a , float b){

    if (b == 0 || a == 0)
    {
        printf("invelid number :");

    }else{
        printf("%f",a / b);
    }
    

    

      }

main(){
    float a,b;

    printf("Enter first number :");
    scanf("%f",&a);

     printf("Enter second number :");
    scanf("%f",&b);


     addnumber(a,b);
}