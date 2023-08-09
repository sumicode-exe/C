#include <stdio.h>
#include <math.h>

int main()
{
    // Declare a 2D array of size 2x3 to store marks
    int marks[2][3]; // _ _ _ _ _ _

    // Assign values to the elements of the array
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 98;

    marks[1][0] = 87;
    marks[1][1] = 99;
    marks[1][2] = 90;

    // Print the elements of the array
    printf("%d \t", marks[0][0]); // Print the value at row 0, column 0
    printf("%d \t", marks[0][1]); // Print the value at row 0, column 1
    printf("%d \t \n", marks[0][2]); // Print the value at row 0, column 2

    printf("%d \t", marks[1][0]); // Print the value at row 1, column 0
    printf("%d \t", marks[1][1]); // Print the value at row 1, column 1
    printf("%d \t", marks[1][2]); // Print the value at row 1, column 2

    return 0;
}