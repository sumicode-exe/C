#include <stdio.h>

// Function to determine if the triangle is equilateral, isosceles, or scalene
void triangleType(int side1, int side2, int side3) {
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral Triangle\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }
}

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the sides of the triangle: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    triangleType(side1, side2, side3);

    return 0;
}