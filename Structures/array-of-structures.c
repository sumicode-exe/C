#include <stdio.h>
#include <math.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

// typedef struct ComputerEngineeringStudent
// {
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

int main()
{
     // declaration
    // array of structures
    struct student IT[60];
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

   
    // s2.roll = 96;
    // printf("Roll No. of s2 = %d \n", s2.roll);
    // printf("Roll No. of s3 = %d\n", s3.roll);

    // // pointer to structure
    // struct student *ptr = &s1;
    // printf("Student.name = %s\n", (*ptr).name);
    // printf("Student.roll = %d\n", (*ptr).roll);
    // printf("Student.cgpa = %f\n", (*ptr).cgpa);

    // // arrow operator
    // printf("student->name = %s\n", ptr->name);
    // printf("student->roll = %d\n", ptr->roll);
    // printf("student->cgpa = %f\n", ptr->cgpa);


    // // typedef keyword
    // coe student1;
    // student1.roll = 1664;
    // student1.cgpa = 6.7;
    // strcpy(student1.name, "XYZ");

    return 0;
}

