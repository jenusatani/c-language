#include<stdio.h>

main()


{

    char val[] = "HELLO WORLD";

    for (int i = 0; val[i] !=NULL; i++)
    {
        if (val[i] <= 'Z' && val[i]  >= 'A')
        {

            val[i] += 32;
        }

        printf("%c",val[i]);
        
    }
    
}