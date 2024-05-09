#include<stdio.h>
#include<string.h>

int main(){

char str[100];
char str_rev[100];
int len =0 ;
printf("Enter the string: ");
gets(str);

for (int i = 0; str[i]!= '\0' ; i++)
{
    len ++ ;
}
for (int i = 0; i < len; i++)
{
    str_rev[i] = str[len-i-1];
}

str_rev != NULL;
printf("Reverse string :%s",str_rev);



}