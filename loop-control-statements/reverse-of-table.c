// Thas programme prints the reverse
// of the table for a number n
// as entered by the user
//(wath aterator and a--)

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", n * i);
    }

    return 0;
}