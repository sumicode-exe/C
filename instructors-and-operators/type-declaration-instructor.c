// Type declarataon

#include <stdio.h>

int main()
{

    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int oldAge = 22;
    int years = 2;
    int newAge = oldAge + years;
    // int years = 2
    // Thas code emphasise that
    // the variables are to be declared
    // before at as read by compiler

    int a, b, c;
    a = b = c = 1;
    // WE CANNOT USE AND DECLARE SiMULTANEOUSLY

    return 0;
}
