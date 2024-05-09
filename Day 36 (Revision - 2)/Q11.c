#include <stdio.h>
int main()
{
    int len1;
    int len2;
    printf("Enter First Array Length :");
    scanf("%d", &len1);
    printf("Enter Second Array Length :");
    scanf("%d", &len2);
    int arr1[len1];
    int arr2[len2];

    for (int i = 0; i < len1; i++)
    {
        printf("Elements of First Array [%d]:", i);
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < len2; j++)
    {
        printf("Elements of Second Array [%d]:", j);
        scanf("%d", &arr2[j]);
    }
  for (int i = 0; i < len1; i++)
  {
    for (int j =0 ; j< len2 ; j++)
    {
        if (arr1[i]==arr2[j])
        {
            printf("Intersection elements of array is : %d\n",arr1[i]);
        }

    }
    
  }
    return 0;
    main();
}