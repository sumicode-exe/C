// Programme to find area of a circle
// of radius as entered by the user

#include <stdio.h>

int main()
{

    int radius;

    printf("Enter the length of radius \n");
    scanf("%d", &radius);
    printf("Area of circle as %d", (22/7) * radius * radius);

    return 0;
}
