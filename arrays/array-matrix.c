#include <stdio.h>
#include <math.h>

int main()
{
    // 2 x 3
    int marks[2][3]; // _ _ _ _ _ _
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 98;

    marks[1][0] = 87;
    marks[1][1] = 99;
    marks[1][2] = 90;

    printf("%d \t", marks[0][0]);
    printf("%d \t", marks[0][1]);
    printf("%d \t \n", marks[0][2]);

    printf("%d \t", marks[1][0]);
    printf("%d \t", marks[1][1]);
    printf("%d \t", marks[1][2]);
}