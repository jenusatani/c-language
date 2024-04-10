#include <stdio.h>

calculateArea(int lenth , int width){
    int sum;


    return lenth * width;

}

main(){

    int lenth,width;

    printf("Enter rectangle Lenth : ");
    scanf("%d",&lenth);

    printf("Enter rectangle width : ");
    scanf("%d",&width);

    printf("Area of rectangle : %d",calculateArea(lenth , width));


}