// Programme to check if the nummber entered
// by the user as a natural number or not

#include <stdio.h>
#include <math.h>

int main()
{

    printf("Is the number positive, negative or zero\n");

    printf("Enter a number: \n");
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive Number");
    }
    else if (num < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}