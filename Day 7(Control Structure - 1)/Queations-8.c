#include<stdio.h>

main ()
{
    int mark;
   

    printf("Enter Your exam mark :");
    scanf("%d",&mark);

   if(mark >= 90 && mark <= 100){
    printf("your mark is %d so your Grade is A ",mark);
    
   }else if(mark >= 80 && mark <= 89){
      print("your mark is %d so your Grade is B ",mark);
   }

   else if(mark >= 70 && mark <= 79){
      print("your mark is %d so your Grade is C ",mark);
   }

   else if(mark >= 60 && mark <= 69){
      print("your mark is %d so your Grade is D ",mark);
   }


   
}