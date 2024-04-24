#include<stdio.h>

main(){
    int number1;


    printf("Enter any number : ");
    scanf("%d",&number1);

     
    if (number1 % 4 == 0)
    {
        printf("%d is leap year.",number1);
    }else{
        printf("%d is not leap year",number1);
    }
  
}