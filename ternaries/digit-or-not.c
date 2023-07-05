//C programme to check 
//whether the character entered
//by the user is a digit or not

#include <stdio.h>

int main(){

    char ch;

    printf("C programme to check the giver character is a digit or not \n");
    printf("Please enter a character: ");

    scanf("%c", &ch);

    ch >= '0' && ch <= '9' ? printf("Giver character %c is a Digit", ch) : printf("Giver character %c is not a Digit", ch);
    
    return 0;
}