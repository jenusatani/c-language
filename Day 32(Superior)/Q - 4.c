#include <stdio.h>
main()
{
    int arrsize;
    printf("Enter the size of array: ");
    scanf("%d", &arrsize);

    int arr[arrsize];
    int even=0, odd=0;

    for (int i = 0; i < arrsize; i++)
    {
        printf("Enter number: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    printf("The even numbers in the array is %d.\n",even);
    printf("The odd numbers in the array is %d.\n",odd);
}