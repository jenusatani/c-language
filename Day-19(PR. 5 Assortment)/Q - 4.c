#include <stdio.h>
int main()
{

    int num;
    printf("Enter the array's size: ");
    scanf("%d", &num);
    int arr[num][num];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rown, rowsum = 0;
    printf("Enter the row number: ");
    scanf("%d", &rown);

    for (int j = 0; j < num; j++)
    {
        printf("Elements of row :%d \n", arr[rown][j]);
    }
    for (int j = 0; j < num; j++)
    {
        rowsum += arr[rown][j];
    }
    printf("The sum of a row : %d\n", rowsum);

    int colnumb, colsum = 0;
    printf("Enter the column number: ");
    scanf("%d", &colnumb);

    for (int j = 0; j < num; j++)
    {
        printf("Elements of column %d \n", arr[j][colnumb]);
    }
    for (int j = 0; j < num; j++)
    {
        colsum += arr[j][colnumb];
    }
    printf("The sum of a column : %d\n", colsum);

    return 0;
}