//Programme to check if the
//Number entered by the user is 
//A natural number or not

#include <stdio.h>
#include <math.h>

int main(){

    printf("This programme identifies if the number entered is a natural number or not \n");
    printf("Enter a number: \n");

    int n;
    scanf("%d", &n);

    n>1 ? printf("Natural Number") :
    printf("Natural Number");
    
    return 0;

}