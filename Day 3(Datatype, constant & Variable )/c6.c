#include<stdio.h>

main() { 

   float a,b,c;

   printf("enter Your first value : ");
   scanf("%f",&a);


   printf("enter Your second value : ");
   scanf("%f",&b);


     c = a;
     a = b;
     b = c;


   printf("after swapping values");


   printf("first intger : %f",a);

   printf("first second : %f",b);



}