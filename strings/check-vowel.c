#include <stdio.h>
#include <string.h>

int checkVowels(char str[], char ch);

int main()
{

    char str[50];

    printf("Enter full name : ");
    fgets(str, 50, stdin);
    puts(str);

    // char ch;
    // printf("Enter the letter to check: ");
    // scanf("%c", &ch);

    checkVolwels(str);
}

int countVowels(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}