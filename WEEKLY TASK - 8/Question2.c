#include <stdio.h>

main() {
    float principal, rate, year, interest;
    
    printf("Enter principal amount : ");
    scanf("%f", &principal);


    printf("Enter annual interest rate (in percentage) : ");
    scanf("%f", &rate);


    printf("Enter time (in years) : ");
    scanf("%f", &year);
    
    rate = rate / 100.0;
    
    interest = principal;
    for(int i = 0; i < year; i++) {
        interest += (interest * rate);
    }
    
    printf("Compound Interest is : %f\n", interest - principal);
    
}
