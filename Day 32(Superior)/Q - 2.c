#include <stdio.h>

main() {
    int size;
    int largest ;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size]; 


    printf("Enter %d elements:\n",size);
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    largest  = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest ) {
            largest  = arr[i];
        }
    }

    printf("The largest element in the array is : %d\n",largest );

}