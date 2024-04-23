#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int fibonacciRecursive(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
}

// Function to calculate Fibonacci number using iteration
int fibonacciIterative(int num)
{
    int a = 0, b = 1, c, i;
    if (num == 0)
    {
        return a;
    }
    for (i = 2; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Function to calculate factorial using recursion
int factorialRecursive(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorialRecursive(num - 1);
}

// Function to calculate factorial using iteration
int factorialIterative(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

// Function to calculate power using recursion
int powerRecursive(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    return base * powerRecursive(base, exponent - 1);
}

// Function to calculate power using iteration
int powerIterative(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int num;

    // input the value of num for fibonacci and factorial
    printf("Enter the value of n \n to find factorial and fibonacci :\n");
    scanf("%d", &num);

    // Fibonacci numbers
    printf("Fibonacci using recursion: %d\n", fibonacciRecursive(num));
    printf("Fibonacci using iteration: %d\n", fibonacciIterative(num));

    // Factorial
    printf("Factorial using recursion: %d\n", factorialRecursive(num));
    printf("Factorial using iteration: %d\n", factorialIterative(num));

    // Power
    int base;
    int exponent;
    printf("Enter the value of \n base and exponent :\n");
    printf("Power using recursion: %d\n", powerRecursive(base, exponent));
    printf("Power using iteration: %d\n", powerIterative(base, exponent));

    return 0;
}