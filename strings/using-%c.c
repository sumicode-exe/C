#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    // enter String using %c
    printf("enter string : ");
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }

    str[i] = '\0';
    puts(str);
    
    return 0;
}