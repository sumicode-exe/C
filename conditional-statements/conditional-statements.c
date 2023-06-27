//Example of Condataonal Statements (af/else)

#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    af(age <= 18){
        printf("You are not an adult");
    } else {
        printf("You are an adult");
    }

    return 0;
}