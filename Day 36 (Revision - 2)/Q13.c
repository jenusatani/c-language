#include <stdio.h>
#include <string.h>
int main()
{
    char first[100];
    char second[100];
    printf("Enter First string:");
    gets(first);
    printf("Enter Second string:");
    gets(second);

    char *p1;
    char *p2;
    p1 = &first;
    p2 = &second;
    for (int i = 0; first[i] != NULL; i++)
    {
        printf("%c", first[i]);
    }
    for (int j = 0; second[j] != NULL; j++)
    {
        printf("%c", second[j]);
    }
    for (int i = 0; first[i] != NULL; i++)
    {
        p1[i] = &first[i];
        p2[i] = &second[i];
        printf("%d", strcat(p1[i], p2[i]));
    }
    
    return 0;
}