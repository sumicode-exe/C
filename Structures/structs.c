#include <stdio.h>
#include <math.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};



int main()
{
    // declaration

    struct student s1;
    // s1.name = "Somya";
    // not a modifiable variable
    strcpy(s1.name, "Somya");
    s1.roll = 64;
    s1.cgpa = 9.2;

    struct student s2;

    printf("Sudent info: \n");

    printf("Name = %s \n", s1.name);
    printf("Roll No. = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);

    s2.roll = 96;
    printf("Roll No. of s2 = %d \n", s2.roll);

    return 0;
}
