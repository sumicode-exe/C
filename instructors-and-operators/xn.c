#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the power: ");
    int n;
    scanf("%d", &n);

    printf("Enter the base: ");
    int x;
    scanf("%d", &x);

    int result = pow(x, n);
    printf("Result: %d", result);
}