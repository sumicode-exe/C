#include<stdio.h>


int main(){

    char ch;

    printf("C program to check given character is digit or not \n");
    printf("Please enter a character: ");

    scanf("%c", &ch);

    if(ch>='0' && ch<='9'){
        printf("Given Character %c is Digit.", ch);
    }
    else{
        printf("Given Character %c is Not Digit.", ch);
    }

    return(0);
}