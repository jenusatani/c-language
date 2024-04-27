#include <stdio.h>

void main()
{

     int size,sum = 0;

    printf("Enter array size : ");
    scanf("%d",&size);


    int arr[size];
    int n, p;

     for (int i = 0; i < size; i++)
    {
        /* code */
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    

    p = arr[0];

    for (n = 1; n < size; n++)
    {
        if (p < arr[n])
            p = arr[n];
    }

    printf("Largest element  is %d", p);
}