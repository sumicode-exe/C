#include <stdio.h>
#include <math.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    // declaration
    struct student s1 = {1552, 8.6, "Rajat"};
    struct student s3 = {0};

    printf("Name of s1 = %s\n", s1.name);
    printf("Roll No. of s1 = %d\n", s1.roll);
    printf("CGPA of s1 = %f\n", s1.cgpa);

    return 0;
}
