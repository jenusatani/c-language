#include<stdio.h>
int main(){
    int num1, num2 , num3 ;
    int max=0;
    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Second Number :");
    scanf("%d",&num2);
    printf("Enter Third Number :");
    scanf("%d",&num3);

    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is Largest Number",num1);
        }else{
            printf("%d is Largest Number",num3);
        }
    }else{
        if (num2>num3)
        {
            printf("%d is Largest Number",num2);
        }else{
            printf("%d is Largest Number",num3);
        }
    }
    
   return 0; 
}

