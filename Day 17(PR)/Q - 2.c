#include<stdio.h>

main(){
   

    for (int i = 5; i >= 1; i--)
    {
        for (int k = 4; k >= i; k--)
        {
            printf(" ");
        }
        
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }

        printf("\n");

    }
    
    
}