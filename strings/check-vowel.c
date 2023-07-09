#include <stdio.h>
#include <string.h>

int checkVowels(char str[]);

int main()
{

    char str[50];

    printf("Enter full name : ");
    fgets(str, 50, stdin);
    puts(str);

    // char ch;
    // printf("Enter the letter to check: ");
    // scanf("%c", &ch);

    checkVowels(str);
    
}


int checkVowels(char str[])
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
     printf("number of vowels is : %d", count);
    return count;
}