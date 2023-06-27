#include <stdio.h>
#include <math.h>

int sum(int n);

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("%d", sum(n));
}

int sum(int n){
    if(n ==1){
        return 1;
    }
    int sumNum1 = sum(n-1);
    int sumN = sumNum1 + n;
    ("%d", sumN);
    return sumN;
}