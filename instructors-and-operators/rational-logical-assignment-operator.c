//Summary of logical/rational/assignment oprators

#include <stdio.h>
#include <math.h>

int main(){

    //ASSOCIATIVITY
    printf("Output : %d \n", 5+2/2*3);
    //printf("Output : %f", (5+2)/(2*3));


    //RATIONAL OPERATORS
    printf("1: %d \n", 4==4);

    printf("2: %d \n", 4<3);
    printf("3: %d \n", 3<4);
    printf("4: %d \n", 4<4);
    printf("5: %d \n", 4<=4);

    printf("6: %d \n", 4>3);
    printf("7: %d \n", 3>4);
    printf("8: %d \n", 4>4);
    printf("9: %d \n", 4>=4);

    printf("10: %d \n", 4!=4);
    printf("11: %d \n", 3!=4);


    //LOGICAL OPERATORS
    printf("12: %d \n", 3<4 && 3<5);
    printf("13: %d \n", 3<4 && 5<4);

    printf("14: %d \n", 3>4 && 3>5);
    printf("15: %d \n", 3>4 && 5>4);
    printf("16: %d \n", 3<4 && 3<5);

    printf("17: %d \n", ! (3<4 && 3<5));
    printf("18: %d \n", ! (4<3 || 5<3));


    //ASSIGNMENT OPERATORS

    int a, b, c;
    
    a = 10;
    b = 100;
    c = 50;
    
    a *= 2;
    printf("%d \n", a);

    a += 2;
    printf("a+2 = %d \n", a);

    a -= 3;
    printf("a-3 = %d \n", a);

    b /= c;
    printf("b/c = %d \n", c);

    b %= a;
    printf("b mod a (when a = 19) = %d", b);

    //b %= c;
    //printf("a%c10 = %d \n", '%', b);

    return 0;


}