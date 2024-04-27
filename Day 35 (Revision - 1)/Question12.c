#include <stdio.h>

void main() {
   
   int number;

   printf("Enter row : ");
   scanf("%d",&number);

   for (int i = 1; i <= number; i++)
   {

        for (int k = number; k >= i; k--)
        {
            printf(" ");
            /* code */
        }
        

        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("* ");
        }
        printf("\n");    
   }
   

   ////////////////////// secod part 


    for (int i = number - 1; i >= 1; i--)
   {

        for (int k = i; k <= number; k++)
        {
            printf(" ");
            /* code */
        }
        

        for (int j = i; j >= 1; j--)
        {
            /* code */
            printf("* ");
        }
        printf("\n");    
   }
   

   

   
}
