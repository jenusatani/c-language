#include<stdio.h>

main ()
{
    int num1;
   

    printf("Enter Your first number :");
    scanf("%d",&num1);

   if(num1 % 2 == 0){
    printf("%d is an even number",num1);
   }

   else{
      printf("is an odd number",num1);
   
   }
}