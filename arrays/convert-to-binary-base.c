// Programme to convert a positive integer to another base

#include <stdio.h>

int main()
{
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                                 '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int convertNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    // get the number and base as input
    pritnf("Number to be converted?");
    scanf("%ls", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);
}