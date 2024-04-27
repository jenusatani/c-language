#include<stdio.h>

 struct book
    {
        int student_roll_number;
        int student_name[100];
        int student_marks;
    }s1[100];





main(){
    
    int n;
    printf("Enter number of student : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        
        printf("Enyter student name : ");
        scanf("%s",&s1[i].student_name);

        printf("Enter student roll number : ");
        scanf("%d",&s1[i].student_roll_number);

        printf("Enter student marks : ");
        scanf("%d",&s1[i].student_marks);


    }


    for (int i = 0; i < n; i++)
    {
        printf("book title : %s\n",s1[i].student_name);
        printf(" student_roll_number : %d\n",s1[i]. student_roll_number);
        printf("book publication year : %d\n",s1[i].student_marks);



    }
    
    
    
}