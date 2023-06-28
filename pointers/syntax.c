#include <stdio.h>
#include <math.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d \n", _age);

    // address
    printf("%p \n", &age);
    printf("%p \n", ptr);
    printf("%p \n", &ptr);

    // data
    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));

    // OUTPUT?
    int *a, x;
    ptr = &x;
    *ptr = 0;

    printf(" x = %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    *ptr += 5;
    printf(" x = %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    (*ptr)++;
    printf(" x = %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    return 0;
}