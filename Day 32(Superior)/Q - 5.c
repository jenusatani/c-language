#include<stdio.h>
main(){
    int arr_size;
    printf("Enter the size of array: ");
    scanf("%d",&arr_size);

    int arr[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter number: ",i);
        scanf("%d",&arr[i]);        
    }
    int arr_cpy[arr_size];

    for (int i = arr_size-1; i >= 0; i--)
    {
        printf("%d  \n",arr[i]);
       
}
}