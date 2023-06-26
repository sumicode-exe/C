#include <stdio.h>
#include <math.h>

int main(){

    for(int i = 1; i<=5; i = i+1) {
        printf("Hello World \n");
    }

    for(int i = 1; i<=100; i = i+1){
        printf("%d \n", i);
    }

    for(int i = 100; i>=1; i = i-1){
        printf("%d \n", i);
    }
    return 0;
}