#include <stdio.h>

int main(){

    int a = 22;
    int b = a;
    int c = b*6;
    int d = 1, e;

    int oldAge = 22;
    int years = 2;
    int newAge = oldAge + years;
    //int years = 2
    //This code emphasise that
    //the variables are to be declared
    //before it is read by compiler

    int a, b, c;
    a = b = c = 1;
    //WE CANNOT USE AND DECLARE SIMULTANEOUSLY

    return 0;
}