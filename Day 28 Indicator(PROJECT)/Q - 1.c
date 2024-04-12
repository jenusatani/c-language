#include<stdio.h>

cube(int *multi){
        return *multi * *multi * *multi;
    }

main(){
    int *num;

    printf("Enter any num :");
    scanf("%d",&num);

    printf("%d",cube(&num));
}