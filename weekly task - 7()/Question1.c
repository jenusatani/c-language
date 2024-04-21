#include<stdio.h>

main(){
    int number;

    printf("Enter any number : ");
    scanf("%d",&number);


    if (number > 0)
    {
        printf("number is positive ");
    }else if(number == 0){
        printf("number is zero ");
    }else{
        printf("number is negative");
    }
    
}