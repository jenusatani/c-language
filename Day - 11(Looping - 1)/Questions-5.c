#include <stdio.h>

main(){

    int i,a;



    printf("enter value :");
    scanf("%d",&i);
    printf("enter value :");
    scanf("%d",&a);

    while (i <= a){
        if(i % 4 == 0){
            printf("%d \n",i);
        }
        i++;
    }
}