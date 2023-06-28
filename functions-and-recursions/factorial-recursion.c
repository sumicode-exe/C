#include <stdio.h>
#include <math.h>

int factorial(int n);
int n, factn;

int main()
{
    printf("enter a number n: \n");
    scanf("%d", &n);
    printf("factorial is: %d", factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factnm1 = factorial(n - 1);
    int factn = factnm1 * n;
    return factn;
}