#include <stdio.h>
#include <math.h>
int main()
{
    int num, var, var2, rem, sum = 0, len = 0, power;

    printf("Enter any number: ");
    scanf("%d", &num);
    var = num;
    var2 = var;
    while (var2 != 0)
    {
        var2 = var2 / 10;
        ++len;
    }

    while (var != 0)
    {
        rem = var % 10;
        var = var / 10;
        power = pow(rem, len);
        sum = sum + power;
        
    }
    if (sum == num)
    {
        printf("%d is an armstrong number\n", num);
    }
    else
    {
        printf("%d is not an armstrong number\n",num);
    }
    main();
}
