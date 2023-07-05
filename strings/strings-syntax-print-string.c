#include <stdio.h>
#include <math.h>
#include <string.h>


void printString(char arr[]);
void printStringPointer(char arr[]);


int main()
{

    // declaration
    char name[] = "Somya Jha";
    char course[] = {'m', 'a', 't', 'h', 's', ' ', 'c', 'o', 'm', 'p', '\0'};
    char firstName[] = "Somya";
    char lastName[] = "Jha";

    // printing string
    printString(name);
    printString(course);
    printString(firstName);
    printString(lastName);

    // printing string with pointer
    printStringPointer(name);
    printStringPointer(course);
    printStringPointer(firstName);
    printStringPointer(lastName);

    // printing using format specifier
    print("%s\n", name);
    print("%s\n", course);
    print("%s\n", firstName);
    print("%s\n", lastName);
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




// printing string with pointer
void printStringPointer(char arr[])
{

    for (char *ptr = arr; *ptr != '\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");
}