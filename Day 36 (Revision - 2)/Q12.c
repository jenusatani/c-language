#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100];
    char string2[100];
    printf("Enter First string :");
    gets(string1);
    printf("Enter Second string :");
    gets(string2);
    int len = 0;
    for (int i = 0; string1[i] != NULL; i++)
    {
        len++;
    }
    int len_chk = 0;
    for (int i = 0; string1[i] != NULL; i++)
    {
        if (string1[i] == string2[i]){
            len_chk ++ ;
        }
    }
if (len == len_chk)
        {
            printf("String are  Equal", string1);
        }
        else
        {
            printf("String are not Equal", string2);
        }
    return 0;
}


