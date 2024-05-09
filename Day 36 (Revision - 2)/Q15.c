#include<stdio.h>
#include<string.h>
int main(){ 
int length =0 ;
char string[100];
printf("Enter the string :");
gets(string);

for (int i = 0; string[i]!= NULL; i++)
{
    length++;
}
 printf("The Length of %s is : %d",string , length);
    return 0;
}