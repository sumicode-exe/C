#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    
    // Library Functions
    char name[] = "Somya";
    int length = strlen(name);
    printf("the length of name : %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));
}