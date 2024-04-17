#include<stdio.h>

 struct CarInventory
    {
        int id;
        int make[100];
        int model;
        char year[100];
        char color[100];
        int price;
        char mileage[100];
    }s1[100];


main(){
    
    int n;
    printf("Enter car number : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter car id : ");
        scanf("%d",&s1[i].id);
        
        printf("Enter car make : ");
        scanf("%s",&s1[i].make);

        printf("Enter car model : ");
        scanf("%d",&s1[i].model);

        printf("Enter car year : ");
        scanf("%s",&s1[i].year);

        printf("Enter car color : ");
        scanf("%s",&s1[i].color);

        printf("Enter car price : ");
        scanf("%d",&s1[i]. price);

        printf("Enyter car mileage : ");
        scanf("%s",&s1[i].mileage);

    }


    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n",s1[i].id);
        printf("MAKE : %s\n",s1[i].make);
        printf("MODEL : %d\n",s1[i].model);
        printf("YEAR : %s\n",s1[i].year);
        printf("COLOR : %s\n",s1[i].color);
        printf("PRICE : %d\n",s1[i].price);
        printf("MILEAGE : %s\n",s1[i].mileage);

    }
}