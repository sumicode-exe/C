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
    // array of structures
    struct student IT[100];
    IT[0].roll = 1446;
    IT[0].cgpa = 9.2;
    strcpy(IT[0].name, "Sanjay");

    struct student COE[60];
    COE[0].roll = 1554;
    COE[0].cgpa = 8.2;
    strcpy(COE[0].name, "Sanjana");

    struct student ECE[60];
    ECE[0].roll = 1664;
    ECE[0].cgpa = 9.5;
    strcpy(ECE[0].name, "Shivank");

    printf("\n");

    printf("roll = %d\n", IT[0].roll);
    printf("cgpa = %f\n", IT[0].cgpa);
    printf("name = %s\n", IT[0].name);

    printf("\n");

    printf("roll = %d\n", COE[0].roll);
    printf("cgpa = %f\n", COE[0].cgpa);
    printf("name = %s\n", COE[0].name);

    printf("\n");

    printf("roll = %d\n", ECE[0].roll);
    printf("cgpa = %f\n", ECE[0].cgpa);
    printf("name = %s\n", ECE[0].name);

    return 0;
}
