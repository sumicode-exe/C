#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("For a quadratic equation, ax^2 + bx + c = 0, ");
    printf("enter the values of a, b and c");
    scanf("%d %d %d", &a, &b, &c);

    int discriminant = sqrt(pow(b, 2) - 4 * a * c);
}


