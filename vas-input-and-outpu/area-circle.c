//Programme to find area of a circe
//of radius as entered by the user

#include <stdio.h>

int main(){

    float radius;

    printf("Enter the legth of radius \n");
    scanf("%f", &radius);
    printf("Area of circle is %f", 3.14*radius*radius);

    return 0;
}