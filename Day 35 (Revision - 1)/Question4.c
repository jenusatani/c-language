#include<stdio.h>

int main() {
    int n;
    printf("Enter length: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the first element: ");
        scanf(" %d", &arr[i]); 
    }
    
    int arr2[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the second element: ");
        scanf(" %d", &arr2[i]); 
    }
    
    int arr3[n * 2];

    for (int i = 0; i < n; i++) {
        arr3[i] = arr[i]; 
        arr3[n + i] = arr2[i]; 
    }

    
    printf("Combined array: ");
    for (int i = 0; i < n * 2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}