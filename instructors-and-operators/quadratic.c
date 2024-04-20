#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("For a quadratic equation, ax^2 + bx + c = 0, \n");
    printf("enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);

    int discriminant = pow(b, 2) - 4 * a * c;
    if ((discriminant > 0))
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    }
    else if (discriminant == 0)
    {

        double root = -b / (2 * a);
        printf("Root: %lf\n", root);
    }
    else
    {
        printf("no real roots");
    }
}
