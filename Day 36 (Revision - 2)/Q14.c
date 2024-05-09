#include<stdio.h>
#include<string.h>
int main(){ 
int length =0 ;
char string[100];
printf("Enter the string :");
gets(string);
puts(strrev(string));

    return 0;
}