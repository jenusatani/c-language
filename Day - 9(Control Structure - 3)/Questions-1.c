#include<stdio.h>

main(){

     
     int a,b,c;

     printf("Enter your value :");
     scanf("%d",&a);

     printf("Enter your value :");
     scanf("%d",&b);

     printf("Enter your value :");
     scanf("%d",&c);

     (a < b) ? (a < c) ? printf("The minimum value is :%d",a) : printf("The minimum value is :%d",c) : printf("The minimum value is :%d",b) ;

    return 0;
}