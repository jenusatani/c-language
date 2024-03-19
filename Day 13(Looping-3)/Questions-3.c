#include<stdio.h>

main(){

    int number;
    

    printf("Enter any number :");
    scanf("%d",&number);

    for(int i=1 ; i<=10; i++)
    {
        
        
         printf("%dX %d = %d \n",number,i,number *i);
        
    }

    
}