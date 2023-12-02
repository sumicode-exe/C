// C programme to make a Simple Calculator
// Using ternary operators

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    // declaring variables
    char ch;
    double a, b;

    while (1)
    {
        // to get input from the user
        printf("Enter and operator (+, -, *, /), \n "
               "If you want to exit, press x: ");
        scanf("%c", &ch);

        printf("Enter the first operators: ");
        scanf("%lf", &a);

        printf("Enter the second operator: ");
        scanf("%lf", &b);

        // logic
        ch == 'x' ? exit(0) : ch == '+' ? printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b)
                          : ch == '-'   ? printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b)
                          : ch == '*'   ? printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b)
                                        : printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
    }
}