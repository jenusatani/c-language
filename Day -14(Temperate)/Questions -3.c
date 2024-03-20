#include<stdio.h>

main(){

    int first = 0, last = 0, number , sum = 0 ;

    printf("Enter Vlaue :");
    scanf("%d",&number);

    last = number % 10;
    

    while(number >= 10)
    {
        number = number / 10;
    }

    first = number;
    sum = first + last ;
    printf("%d",sum);


    return 0;
    
}