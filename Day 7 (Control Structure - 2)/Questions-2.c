#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter :");
    scanf("%d",&a);
    printf("Enter :");
    scanf("%d",&b);
    printf("Enter :");
    scanf("%d",&c);
    printf("Enter :");
    scanf("%d",&d);
    printf("a is : %d\n",a);
    printf("b is : %d\n",b);
    printf("c is : %d\n",c);
    printf("d is : %d\n",d);

    if (a > b)
    {
        /* code */
        if (a > c)
        {
            /* code */
            if (a > d)
            {
                /* code */
                printf("A is max");
            }
            else
            {
                if (d > b)
                {
                    /* code */
                    if (d > c)
                    {
                        /* code */
                        printf("D is max");
                    }
                }
            }
        }
        else
        {
            if (c > b)
            {
                /* code */
                if (c > d)
                {
                    /* code */
                    printf("C is max");
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            /* code */
            if (b > d)
            {
                /* code */
                printf("B is max");
            }
            else{
                printf("d is max");
            }
        }
        else{
            printf("c is max");
        }
    }
    return 0;
}