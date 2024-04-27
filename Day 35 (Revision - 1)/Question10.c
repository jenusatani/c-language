#include <stdio.h>

void main() {
   
   int number;

   printf("Enter row : ");
   scanf("%d",&number);

  
   for (int i = 1; i <= number; i++)
   {
    /* code */
        for (int j = 1; j <= number; j++)
        {
            
            if (i == 1 || i == number || j == 1 || j == number)
            {
                /* code */
                printf("*");
            }else{
                printf(" ");
            }
            
            
        }
        printf("\n");
        
   }
   

   
}
