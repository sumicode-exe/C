#include <stdio.h>
#include <string.h>

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
}

int main()
{
    char str[] = "ApnaCollege";
    char ch = 'x';
    checkChar(str, ch);
}
