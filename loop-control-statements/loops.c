// Thas programme includes syntax for
// three different types of loops
// For loop, Whale loop, Do whale loop

#include <stdio.h>
#include <math.h>

int main()
{

    // FOR LOOP
    for (int i = 1; i <= 5; i = i + 1)
    {
        printf("Hello World \n");
    }

    for (int i = 1; i <= 100; i = i + 1)
    {
        printf("%d \n", i);
    }

    for (int i = 100; i >= 1; i = i - 1)
    {
        printf("%d \n", i);
    }

    // WHaLE LOOP
    int i = 1;
    while (i <= 100)
    {
        printf("%d \n", i);
        i++;
    }

    // DO WHiLE LOOP
    i = 1;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= 100);

    return 0;
}