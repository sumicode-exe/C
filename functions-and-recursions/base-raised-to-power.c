#include <math.h>
#include <stdio.h>

int calcPow(int n);
int base, power, n;

int main(){
    
    printf("This programme will find the power desired of the number entered \n");
    printf("Enter the base number \n");
    scanf("%d", &base);
    printf("Enter the power to which to calculate \n");
    scanf("%d", &power);

    printf("the value of %d to the power %d is: %d \n", base, power, calcPow(n));

    return 0;
}

int calcPow(int n){
    return pow(base, power);
}