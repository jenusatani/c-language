#include<stdio.h>

main (){
   float BMI,weight,height;


    printf("Enter weight in kilograms :");
    scanf("%f",&weight);


    printf("Enter height in meters :");
    scanf("%f",&height);


    BMI = weight / (height * height);

    printf("Body Mass Index (BMI) : %f",BMI);

}