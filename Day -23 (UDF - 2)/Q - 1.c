#include<stdio.h>
int sum(int row, int num[]){
    int sum =0;
    for (int i = 0; i < row; i++)
    {
        /* code */
        sum += num[i];
    }
        printf("%d \n",sum);
    
}
main(){
    int row;
    printf("Enter rows: ");
    scanf("%d",&row);
    int num[row];
    for (int i = 0; i < row; i++)
    {
        /* code */
        printf("num[%d]: ",i);
        scanf("%d",&num[i]);
    }
    

    sum(row,num);
}