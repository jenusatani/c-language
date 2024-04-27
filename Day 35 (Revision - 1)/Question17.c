// 17. Create a program to print the Fibonacci series up to a specified limit using a while loop.

#include <stdio.h>
main() 
{
  int i, n;
  int t1 = 0, t2 = 1, nt = t1 + t2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nt);
    t1 = t2;
    t2 = nt;
    nt = t1 + t2;
  }

}