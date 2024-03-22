#include <stdio.h>

int main()
{

    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        for (int k = 8; k >= i*2-1; k--)
        {
            /* code */
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            /* code */
            printf("%d",j);
        }
        
        
        printf("\n");
    }
   
    return 0;
}