#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age <= 18){
        printf("You are not an adult");
    } else {
        printf("You are an adult");
    }

    return 0;
}