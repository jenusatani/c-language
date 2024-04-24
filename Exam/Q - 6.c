#include<stdio.h>

 struct movie
    {
        int m_title[100];
        char m_genre[100];
        char m_language[100];
        
    }d1[100];

    
main(){
    
    int n;
    printf("Enter number of movies : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
       
        
        printf("Enter movie title : ");
        scanf("%s",&d1[i].m_title);

        printf("Enter movie genre : ");
        scanf("%s",&d1[i].m_genre);

        printf("Enter movie author : ");
        scanf("%s",&d1[i].m_language);

      

    }


    for (int i = 0; i < n; i++)
    {
        printf("movie title : %s\n",d1[i].m_title);
        printf("movie genre : %s\n",d1[i].m_genre);
        printf("movie language : %s\n",d1[i].m_language);
   }
}