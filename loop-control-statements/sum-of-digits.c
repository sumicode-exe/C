#include <stdio.h>


int sumOfDigits(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;       // Remove the last digit from the number
    }
    return sum;
}


int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = sumOfDigits(number);
    printf("Sum of digits: %d\n", result);
    return 0;
}