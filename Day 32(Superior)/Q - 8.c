#include<stdio.h>
main(){
    int size;
    printf("Enter the first arrays size: ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the numbers; ");
        scanf("%d",&arr[i]);
    }
    int size1;
    printf("Enter the first arrays size: ");
    scanf("%d",&size1);

    int arr2[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("Enter the numbers; ");
        scanf("%d",&arr2[i]);
    }
    

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr[i] == arr2[j])
            {
                printf("%d ",arr[i]);
                break;
            }
            
        }
}
}