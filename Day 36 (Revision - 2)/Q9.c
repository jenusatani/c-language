#include<stdio.h>
int main()
{
    int row ;
    int col;
    printf("Enter Row size:");
    scanf("%d",&row);
    printf("Enter Column size:");
    scanf("%d",&col);
    int arr[row][col];
    int sum= 0;

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        printf("Elements of [%d] [%d]:",i ,j);
        scanf("%d",&arr[i][j]);
    }
    
}

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        sum=sum+arr[i][j];
    }
}
    printf("Sum of 2D array elements: %d\n", sum);   
    return 0;
}
