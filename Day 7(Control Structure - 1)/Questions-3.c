#include<stdio.h>

main ()
{
    int num1;
   

    printf("Enter Your first number :");
    scanf("%d",&num1);

   if(0 > num1){
    printf("This number is Negative");
   }

   else if (0 == num1){
      printf("This number is Neutral");
   }else{
      printf("This number is Positive ");
   }
}