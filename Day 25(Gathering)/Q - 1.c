#include <stdio.h>
calculateSumOfSquares(int n)
{
    int sum = 0;
    int square = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            square = i * i;
            sum += square;
        }   
    }
    return sum;
}
main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   printf(" The sum of all even numbers square is : %d",calculateSumOfSquares(n));
}