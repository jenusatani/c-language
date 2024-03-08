#include<stdio.h>

main ()
{
    int mark;
   

    printf("Enter Your exam mark :");
    scanf("%d",&mark);

   if(mark >= 50){
    printf("Congratulations! You have passed the exam");
   }

   else{
      printf("Sorry! You failed the exam better luck next time");
   
   }
}