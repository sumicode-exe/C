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

    // convert
    struct student *ptr = &s1;
    printf("Student.name (ptr) = %s\n", (*ptr).name);
    printf("Student.roll (ptr)= %d\n", (*ptr).roll);
    printf("Student.cgpa (ptr)= %f\n", (*ptr).cgpa);

    printf("\n");

    // arrow operator
    printf("student->name (arrow) = %s\n", ptr->name);
    printf("student->roll (arrow)= %d\n", ptr->roll);
    printf("student->cgpa (arrow)= %f\n", ptr->cgpa);

    return 0;
}