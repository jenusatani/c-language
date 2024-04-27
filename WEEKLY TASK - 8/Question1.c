#include<stdio.h>

main(){
    int numbers,sum = 0;

    printf("enter any number : ");
    scanf("%d",&numbers);

    for (int i = 1; i <= numbers; i++)
    {
        sum += i;

       
    }
    printf("%d",sum);
}