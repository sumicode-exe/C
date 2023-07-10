#include <stdio.h>
#include <math.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo1(struct student s1);

void printInfo2(struct student s2);

void printInfo3(struct student s3);

int main()
{
    // declaration
    struct student s1;
    // s1.name = "Somya";
    // not a modifiable variable
    strcpy(s1.name, "Somya");
    s1.roll = 64;
    s1.cgpa = 9.2;

    struct student s2 = {"Rajat", 1552, 8.6};

    struct student s3 = {0};

    // Passing structure to function
    printInfo1(s1);
    printInfo2(s2);
    printInfo3(s3);

    return 0;
}


void printInfo1(struct student s1)
{
    printf("Student info : \n");

    printf("Name = %s \n", s1.name);
    printf("Roll No. = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);
}


void printInfo2(struct student s2)
{
    printf("Student info : \n");

    printf("Name = %s \n", s2.name);
    printf("Roll No. = %d\n", s2.roll);
    printf("cgpa = %f\n", s2.cgpa);
}


void printInfo3(struct student s3)
{
    printf("Student info : \n");

    printf("Name = %s \n", s3.name);
    printf("Roll No. = %d\n", s3.roll);
    printf("cgpa = %f\n", s3.cgpa);
}