#include <stdio.h>

// Function to copy one string to another using pointers
void stringCopy(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

// Function to compare two strings using pointers
int stringCompare(char *str1, char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 != *str2)
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

// Function to calculate the length of a string using pointers
int stringLength(char *str)
{
    int length = 0;
    while (*str)
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    // String Copy
    stringCopy(str2, str1);
    printf("Copied string: %s\n", str2);

    // String Compare
    printf("Enter another string to compare: ");
    scanf("%s", str2);
    if (stringCompare(str1, str2))
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    // String Length
    printf("Length of the string: %d\n", stringLength(str1));

    return 0;
}