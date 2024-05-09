#include<stdio.h>
#include<string.h>
int main(){

char str[100];
gets(str);
printf("Enter the string: ");
gets(str);

for (int i = 0; str[i] != '\0'; i++)
{
    if (str[i]>='A' && str[i]<='Z')
    {
        str[i]=str[i]+32;
    }
}
printf("Lowercase string is: %s\n",str);


return 0;
}