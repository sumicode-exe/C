#include <stdio.h>
#define MULTIPLY(a, b) a *b

int main()
{
    //THIS MACRO IF EXPANDED AS 
    //2 + 3 * 3 + 5, not as 5 * 8
    printf("%d", MULTIPLY(2 + 3, 3 + 5));
    return 0;
}

//OUTPUT = 16