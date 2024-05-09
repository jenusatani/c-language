#include<stdio.h>
#include<math.h>
int main()
{
    float num , i;
    printf("Enter the number: ");
    scanf("%f",&num);
    float p=0.5;
    float power = pow(num,p);

    printf("Square root of %0.1f is : %0.1f",num ,power);
return 0;
}
