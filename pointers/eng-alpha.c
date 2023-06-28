#include <stdio.h>

int main()
{
    char alphabet[26];
    char *ptr = alphabet;
    // Assigning the English alphabet letters to the array using pointer
    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        *ptr = letter;
        ptr++;
    }
    // Printing the English alphabet letters using pointer
    ptr = alphabet;
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}