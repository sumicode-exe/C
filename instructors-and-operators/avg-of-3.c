//Average of the three numbers entered by the user

#include <stdio.h>

int main(){

    int a, b, c, avg;

    printf("Enter the first number \n");
    scanf("%d", &a);

    printf("Enter the second number \n");
    scanf("%d", &b);

    printf("Enter the third number \n");
    scanf("%d", &c);

    avg = (a+b+c)/3;
    printf("Average is : %d", avg);

    return 0;
}