#include<stdio.h>
#include<string.h>
int main(){
char arr[100];
printf("Enter the String:");
gets(arr);
    for (int i = 0; arr[i] != NULL; i++){
        if (arr[i]>='a'&& arr[i]<='z')
        {
            arr[i]-=32;
        }
            printf("%c",arr[i]);
    }
 return 0;   
}