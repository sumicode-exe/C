#include <stdio.h>
#include <math.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;

    // call by value
    swap(x, y);
    printf("x = %d & y = %d \n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = a;
}

void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = *a;
}