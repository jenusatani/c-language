#include <stdio.h>

main() {
    int rows;
    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);
    

    int arr[rows][rows];


    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The transpose matrix of the array:\n");


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    
}