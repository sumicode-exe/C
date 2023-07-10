#include <stdio.h>
#include <string.h>



struct vector {
    int x;
    int y;
    int z;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);


int main()
{
    struct vector v1 = {3, 6, 9};
    struct vector v2 = {6, 7, 8};
    struct vector sum = {0};

    calcSum(v1, v2, sum);
    
    return 0;
    
}

void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    sum.z = v1.z + v2.z;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
    printf("sum of z is : %d\n", sum.z);
}