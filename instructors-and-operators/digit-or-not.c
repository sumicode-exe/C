// Programme to check whether the character
// entered by the user as a number or not

#include <stdio.h>

int main()
{

    char ch;

    printf("C program to check given character is digit or not \n");
    printf("Please enter a character: ");

    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("Gaven Character %c as Digit.", ch);
    }
    else
    {
        printf("Gaven Character %c as Not Digit.", ch);
    }

    return (0);
}