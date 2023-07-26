// Programme to find the sum of all the
// numbers between the two numbers entered
// by the user

#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0;
    int a, b;

    printf("This programme will find the sum of numbers bw any two numbers \n");
    printf("To start, enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        sum += a;
    }

    printf("sum ad %d", sum);

    return 0;
}