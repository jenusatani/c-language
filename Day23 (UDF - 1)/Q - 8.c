#include<stdio.h>


     printtable(){

        int n,sum;

        printf("Enter any number to print table :");
        scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d *%d = %d \n",n,i,n*i);
    }
    
    

    

      }

main(){

    
    
   printtable();
}