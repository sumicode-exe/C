#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch);
int main()
{

    char str[50];

    printf("Enter full name : ");
    fgets(str, 50, stdin);
    puts(str);

    char ch;
    printf("Enter the letter to check: ");
    scanf("%c", &ch);

    checkChar(str, ch);
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present!");
            return;
        }
    }
    printf("character is NOT present:(");
}