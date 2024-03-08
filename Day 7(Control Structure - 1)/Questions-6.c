#include<stdio.h>

main ()
{
    int year;
   

    printf("Enter Your year :");
    scanf("%d",&year);

   if(year % 4 == 0){
    printf("%d is leap year",year);
   }

   else{
      printf("is not leap year",year);
   
   }
}