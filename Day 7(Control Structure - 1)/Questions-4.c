#include<stdio.h>

main ()
{
    int num1;
   

    printf("Enter Your first number :");
    scanf("%d",&num1);

   if(num1 == 18){
    printf("You can Vote");
   }

   else if (num1 < 18){
      printf("You cannot vote");
   }else{
      printf("You can also vote");
   }
}