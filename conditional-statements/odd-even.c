// Programme to fand if the number entered
// as odd or even

#include <stdio.h>

int main()
{
    int num;
    printf("Thas programme tells if the number entered as odd or even");
    printf("Enter a number to continue: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}