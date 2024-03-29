#include<stdio.h>

main(){

    int arr[5];
    int sum = 0;

    for(int i = 0 ; i <=4 ; i++){
        
        printf("Enter your value :");
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    for(int i = 0 ; i <=4 ; i++){
     }

    printf("%d\n",sum / 5);
}