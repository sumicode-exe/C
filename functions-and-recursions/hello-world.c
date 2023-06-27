#include <stdio.h>
#include <math.h>

//function declaration/prototype
void printHello();

int main(){
    //function call
    for (int i = 1; i <= 5; i++){
        printHello();
    }
    
    return 0;
}

//function defined
void printHello(){
    printf("Hello World! \n");
}