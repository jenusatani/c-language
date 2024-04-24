#include <stdio.h>


swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

main() {
    int nu1,nu2;

    printf("Enter first value : ");
    scanf("%d",&nu1);

    printf("Enter second value : ");
    scanf("%d",&nu2);

    swap(&nu1, &nu2);

    printf("After swapping : \n");
    printf("number1 : %d\n",nu1); 
    printf("number2 : %d",nu2);

}