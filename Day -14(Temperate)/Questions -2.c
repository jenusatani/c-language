#include<stdio.h>

main(){

    int number , count = 0;

    printf("Enter value :");
    scanf("%d",&number);

    while (number != 0)
    {
        number /=10;
        count++;
    }

    printf("%d",count);
    

}