#include <stdio.h>

main(){

    int i;
  
     printf("Enter Your Value :");
     scanf("%d",&i);
    

    while (i >= 1){
       if(i % 2 != 0){
         printf("%d \n ",i);

       }
        i--;
    }
}