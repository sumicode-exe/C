#include <stdio.h>
#include <math.h>
#include <string.h>

void printStringPointer(char arr[]);

int main()
{

    // declaration
    char name[] = "Somya Jha";
    char course[] = {'m', 'a', 't', 'h', 's', ' ', 'c', 'o', 'm', 'p', '\0'};
    char firstName[] = "Somya";
    char lastName[] = "Jha";

    printStringPointer(name);
    printStringPointer(course);
    printStringPointer(firstName);
    printStringPointer(lastName);
}

// printing string with pointer
void printStringPointer(char arr[])
{

    for (char *ptr = arr; *ptr != '\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");
}