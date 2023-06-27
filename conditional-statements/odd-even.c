//Programme to find if the number entered
//Is odd or even

#include <stdio.h>

int main(){
    int num;
    printf("This programme tells if the number entered is odd or even");
    printf("Enter a number to continue: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Even number");
    } else {
        printf("Odd number");
    }

    return 0;
}