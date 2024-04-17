#include<stdio.h>

 struct BookRecord
    {
        int book;
        int tital[100];
        int author;
        char genre[100];
        char publisher[100];
        int publication_year;
        char price[100];
    }s1[100];


main(){
    
    int n;
    printf("Enter Book Number : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter book : ");
        scanf("%d",&s1[i].book);
        
        printf("Enter tital : ");
        scanf("%s",&s1[i].tital);

        printf("Enter author : ");
        scanf("%d",&s1[i].author);

        printf("Enter genre : ");
        scanf("%s",&s1[i].genre);

        printf("Enter publisher : ");
        scanf("%s",&s1[i].publisher);

        printf("Enter publication year : ");
        scanf("%d",&s1[i]. publication_year);

        printf("Enyter prise : ");
        scanf("%s",&s1[i].price);

    }


    for (int i = 0; i < n; i++)
    {
        printf("BOOK : %d\n",s1[i].book);
        printf("TITAL : %s\n",s1[i].tital);
        printf("AUTHOR : %d\n",s1[i].author);
        printf("GENRE : %s\n",s1[i].genre);
        printf("PUBLISHER : %s\n",s1[i].publisher);
        printf("PUBLICATION YEAR : %d\n",s1[i].publication_year);
        printf("PRISE : %s\n",s1[i].price);

    }
}