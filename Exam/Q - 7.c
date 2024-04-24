#include <stdio.h>

main() {
    FILE *num;
    FILE *num1;
    char n[100]; 

    
    num = fopen("num.txt","r");
    if (num == NULL) {
        printf("Error opening num file.\n");
    }

    num1 = fopen("num1.txt","w");
    if (num1 == NULL) {
        printf("Error opening num1 file.\n");
        fclose(num);
    }

    fgets(n, sizeof(n),num);
    strupr(n);

    fprintf(num1,"%s",n);

    printf("Sentence capitalized and written to num1.txt successfully");

    fclose(num);
    fclose(num1);

}