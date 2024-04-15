#include<stdio.h>
main(){
    int j;
    printf("Size of Array:");
    scanf("%d",&j);
    int arr[j];
    int *p[j];
    for (int i = 0; i <j; i++)
    {
        printf("Elements :");
        scanf("%d",&arr[i]);
    }
    printf("Original value  of array is :\n");
    for (int i = 0; i<j;  i++)
    {
        p[i]=&arr[i];
        printf(" %d", arr[i]);
    }
    printf("\nReverse value  of array is :\n");
    for (int i =j-1; i>=0;  i--)
    {
        p[i]=&arr[i];
        printf("%d", arr[i]);
        }
}