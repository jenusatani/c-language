#include<stdio.h>

main(){

    int arr[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("Enter your value :");
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("%d\n",arr[i]);
    }
}