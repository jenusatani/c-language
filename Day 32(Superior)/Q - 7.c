#include<stdio.h>
main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements of array :");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
    }
    printf("Second Largest Number of array  is :%d\n",smax);
}