#include <stdio.h>
#include <math.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

typedef struct ComputerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

void printInfor(struct student s1);

int main()
{
    struct student s1;
    // s1.name = "Somya";
    // not a modifiable variable
    strcpy(s1.name, "Somya");
    s1.roll = 64;
    s1.cgpa = 9.2;

    printf("Sudent info: \n");
    printf("Name = %s \n", s1.name);
    printf("Roll No. = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);

    //array of structures
    struct student IT[60];
    struct student COE[60];
    struct student ECE[60];

    //declaration
    struct student s2 = {"Rajat, 1552, 8.6"};
    struct student s3 = {0};
}

