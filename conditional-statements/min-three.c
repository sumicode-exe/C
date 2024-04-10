#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3 = 0;
    int largest = 0;

    printf("Enter the three numbers: ");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3))
    {
        largest = num1;
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    printf("The largest number is: %d", largest);
}