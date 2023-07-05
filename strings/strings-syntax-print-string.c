#include <stdio.h>
#include <math.h>
#include <string.h>

void printString(char arr[]);

int main()
{

    // declaration
    char name[] = "Somya Jha";
    char course[] = {'m', 'a', 't', 'h', 's', ' ', 'c', 'o', 'm', 'p', '\0'};
    char firstName[] = "Somya";
    char lastName[] = "Jha";

    printString(name);
    printString(course);
    printString(firstName);
    printString(lastName);
}

// printing string
void printString(char arr[])
{

    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}