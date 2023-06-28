// This program finds the maximum of two numbers
// entered by the user using pointers.

#include <stdio.h>

int findMax(int *ptr1, int *ptr2);

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int *ptr1 = &num1; // Pointer to num1
    int *ptr2 = &num2; // Pointer to num2
    int max = findMax(ptr1, ptr2);

    printf("The maximum number is: %d\n", max);
    return 0;
}

int findMax(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
    {
        return *ptr1;
    }
    else
    {
        return *ptr2;
    }
}