#include<stdio.h>
int main(){
 int len; 
 printf("Enter the length of the array: ");
 scanf("%d",&len);
 int arr[len];
for (int i = 0; i < len; i++)
{
    printf("Enter elements :");
    scanf("%d",&arr[i]);
}
 int max= arr[0];
 int sec_max= arr[0];
 for (int i = 0; i < len; i++){
    if (arr[i]> max)
    {
        sec_max=max;
        max =arr[i];
    }
 }
 printf("Second Largest number is %d",sec_max);
return 0;    
}