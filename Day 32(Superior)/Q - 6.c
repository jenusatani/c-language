#include<stdio.h>
int arrintake(int arr[], int arrsize){
    for (int i = 0; i < arrsize; i++)
    {
        printf("Enter number: ",i);
        scanf("%d",&arr[i]);        
    }
}
main(){
    int arrsize;
    printf("Enter the size of array: ");
    scanf("%d",&arrsize);

    int arr1[arrsize];
    arrintake(arr1,arrsize);

    printf("\n");

    int arr2[arrsize];
    arrintake(arr2,arrsize);

    printf("\n");
    int mergedsize = arrsize+arrsize;
    int merge[mergedsize];

    for (int i = 0; i < mergedsize; i++)
    {
        merge[i] = arr1[i];
    }
    for (int i = 0; i < mergedsize; i++)
    {
        merge[arrsize+i] = arr2[i];
    }
    printf("The merged array is: ");
    for (int i = 0; i < mergedsize; i++)
    {
        printf("%d ",merge[i]);
}
}
