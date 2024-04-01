#include<stdio.h>
int main(){

    int row,column;
    printf("Enter the array's rows: ");
    scanf("%d",&row);
    printf("Enter the array's columns: ");
    scanf("%d",&column);

    int arr[row][column];
   
    int sum = 0;

    printf("Enter the array's row size: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum += arr [i][j];
               
            }
            
        }
        
    }
   
    printf("The sum of diagonal elements of an Array:%d ",sum);
    

    return 0;
}  