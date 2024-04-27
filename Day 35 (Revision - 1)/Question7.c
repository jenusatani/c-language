// 7. Create a program to concatenate two strings without using library functions.

#include<stdio.h>
main()
{
  char str1[25],str2[25];
  int i=0,j=0;
  printf("\nEnter First String:");
  gets(str1);
  printf("\nEnter Second String:");
  gets(str2);
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\n %s",str1);
}