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
}