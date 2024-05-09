#include<stdio.h>
int main(){
int num;
int sum = 0 ;
printf("Enter the Number:");
scanf("%d",&num);  //123

while (num!=0) // 123 12 1
{
    sum = sum + num % 10;   //  3 + 2 + 1
    num/=10;  // 12 1 0
}
printf("The Sum of digits is :%d",sum);

return 0;    
}