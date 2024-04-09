#include<stdio.h>
int factorial(int number){
    
    if (number <= 1)
    {
        return 1;
    }else{
        return number * factorial(number - 1);
    }
    
}
main(){
    int number;
    printf("Enter rows: ");
    scanf("%d",&number);
    

    printf("%d",factorial(number));
}