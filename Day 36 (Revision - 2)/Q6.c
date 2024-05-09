#include<stdio.h>
#include<string.h>
int main(){

char str[100];
gets(str);
char target ;
int count = 0;
int len = 0;
printf("Enter the string: ");
gets(str);
printf("Enter Target Character :");
scanf("%c",&target);
for (int i = 0;str[i]!='\0'  ; i++)
{
    len ++ ;
}
for (int i = 0; i < len; i++)
{
    if (str[i]==target)
    {
        count ++ ;
    }
}
printf("Occurences of '%c' in '%s' : %d ", target , str , count);

}