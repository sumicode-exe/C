#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    //input a string
    char firstName[40];
    printf("Enter first name : ");
    scanf("%s", firstName);
    printf("Your first name is %s\n", firstName);

    char fullName[40];
    printf("Enter full name : ");
    scanf("%s", fullName);
    printf("Your full name is %s\n", fullName);

    //THIS IS THE PROBLEM WITH scanf() AND printf()
    //IT ONLY CONSIDERS CHARACTERS UPTO SPACE
    //THAT IS WHY WE USE fgets() AND puts()

    // gets() & puts()
    char fullName[40];
    printf("Enter full name : ");
    fgets(fullName, 40, stdin);
    puts(fullName);

}