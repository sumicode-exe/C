#include <stdio.h>
#define INCREMENT(x) x++

int main()
{
    char *ptr = "sumii";
    int x = 10;
    printf("%s ", INCREMENT(ptr));
    printf("%d", INCREMENT(x));
    return 0;
}