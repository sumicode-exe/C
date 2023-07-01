#include <stdio.h>
#include <math.h>

void printAdd(int n);

int main()
{
    int n = 4;
    printAdd(n);
    printf("address of n is : %d\n", &n);
    return 0;
}

void printAdd(int n)
{
    printf("address of n is : %d\n", &n);
}