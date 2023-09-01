// C program to implement getchar()
// function to read single character
#include <stdio.h>
 
// Driver code
int main()
{
    int character;
    character = getchar();
 
    printf("The entered character is : %c", character);
    return 0;
}

//On entering "Hello World", 
//The output is "H"