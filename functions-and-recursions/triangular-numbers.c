// FUnction to calculate the nth triangular number
#include <stdio.h>

void calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; i++)
    {
        triangularNumber += i;
    }
    printf("Triangular number %i is %i \n", n, triangularNumber);
}

int main(void)
{
    printf("Enter the number whose triangular you want to calculate: ");
    int num;
    scanf("%d", &num);
    calculateTriangularNumber(num);
    return 0;
}