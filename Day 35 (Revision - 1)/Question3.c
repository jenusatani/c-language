#include<stdio.h>

int main() {
    int n;
    printf("Enter length: ");
    scanf("%d", &n);

 
    char arr[n];
        printf("Enter the element: ");

    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); 
    }

    printf("Elements in the array: ");
    for (int i = n-1; i >= 0; i--) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}