//Programme to calculate the absolute value of square root of a number
#include <stdio.h>

//Function to calculate the absolute of a numeber
float absoluteValue (float x){
    if (x < 0){
        x = -x;
    }
    return x;
}

//Function to compute the square root of the number
float squareRoot (float x){
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue (guess * guess -x) >= epsilon){
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}

int main(){
    printf("Enter the number whose absolute square root you want to calculate:");
    int num;
    scanf("%d", &num);

    printf("squareRoot of %d = %f \n", num, squareRoot(num));
}