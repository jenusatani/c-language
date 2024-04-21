#include<stdio.h>

main(){
    int number1,number2,number3;


    printf("Enter first number : ");
    scanf("%d",&number1);

     printf("Enter second number : ");
    scanf("%d",&number2);

     printf("Enter third number : ");
    scanf("%d",&number3);


    if (number1 < number2)
    {
        if (number3 < number2)
        {
            printf("big number is : %d",number2);
        }else{
            printf("big number is : %d",number3);
        }
         
    }else{
        printf("big number is : %d",number1);
    }
    


   
    
}
