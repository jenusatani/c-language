#include <stdio.h>
fact(int Number)
{
    if (Number == 1)
    {
        return 1;
    }
    else
    {
        return Number * fact(Number - 1);
    }
}
int main()
{
    int Number;
    printf("Enter the Number :");
    scanf("%d", &Number);

    printf("Factorial of %d is %d", Number, fact(Number));

    return 0;
}