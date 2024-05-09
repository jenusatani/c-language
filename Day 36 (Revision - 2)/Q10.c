#include<stdio.h>
void main(){

int len1;
int len2;
printf("Enter First array length:");
scanf("%d",&len1);
printf("Enter Second array length:");
scanf("%d",&len2);
int arr[len1];
int array[len2];
for (int i = 0; i <len1; i++)
{
    printf("Elements of First Array [%d]",i);
    scanf("%d",&arr[i]);
}
int *p1[len1];
p1[len1]=&arr[len1];
int *p2[len2];
p2[len2]=&array[len2];

for (int j = 0; j < len2; j++)
{
    printf("Elements of Second Array [%d]",j);
    scanf("%d",&array[j]);
}
for (int i =0; i <len1; i++)
{
    p1[i]=&arr[i];
    p2[i]=&array[i];
    printf(" %d\n",(*p1[i])* (*p2[i]));
}


}