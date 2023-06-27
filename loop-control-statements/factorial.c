//Programme to print the factorial 
//of a number entered  by the user

#include <stdio.h>

int main(){
    int n;
    printf("enter a number : \n");
    scanf("%d", &n);

    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }

    printf("final factorial is %d ", fact);
}