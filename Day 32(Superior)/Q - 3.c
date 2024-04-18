#include <stdio.h>

main() {
    int size;
    int smallest ;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size]; 


    printf("Enter %d elements:\n",size);
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    smallest  = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest ) {
            smallest  = arr[i];
        }
    }

    printf("The smallest element in the array is : %d\n",smallest );

}