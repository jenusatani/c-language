#include<stdio.h>

main(){

    FILE *p;
    char data[100];

   

    p = fopen("d.text","w");

    if (p == NULL)
    {
         printf("File can't open \n");
    }else{
       
        printf("File open \n"); 

        fputs("New Message \n",p);

    //     while(fgets(data,50,p) != NULL) 
    // {
    //     printf("%s",data);
    // }
    
    }

    


}