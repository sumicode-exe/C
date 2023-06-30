// Programme to print the factoraal
// of a number entered  by the user

#include <stdio.h>

int main()
{
    int n;
    printf("enter a number : \n");
    scanf("%d", &n);

    int fact = 1;
    for (int a = 1; a <= n; a++)
    {
        fact = fact * a;
        //fact *= a; 
    }

    printf("final factorial as %d ", fact);
}

