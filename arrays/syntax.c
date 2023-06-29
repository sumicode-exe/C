#include <stdio.h>

int main()
{
    int marks[3];
    printf("physics : ");
    scanf("%d", &marks[0]);

    printf("chemistr : ");
    scanf("%d", &marks[1]);

    printf("maths : ");
    scanf("%d", &marks[2]);

    printf("physics = %d, ", marks[0]);
    printf("chemistry = %d, ", marks[1]);
    printf("maths = %d, ", marks[2]);
}

////VERY VERY VERY VERY IMPORTANT:
// int *ptr = &arr[0];
// int *ptr = arr;
// MEAN THE SAME THING