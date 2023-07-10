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

    
    struct student s2 = {"Rajat, 1552, 8.6"};

    struct student s3 = {0};



    printf("Sudent info: \n");

    printf("Name = %s \n", s1.name);
    printf("Roll No. = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);

    printf("Name = %s \n", s2.name);
    printf("Roll No. = %d\n", s2.roll);
    printf("cgpa = %f\n", s2.cgpa);

    printf("Name = %s \n", s3.name);
    printf("Roll No. = %d\n", s3.roll);
    printf("cgpa = %f\n", s3.cgpa);

    // // array of structures
    // struct student IT[60];
    // struct student COE[60];
    // struct student ECE[60];

   
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

    // Passing structure to function
    printInfo1(s1);
    printInfo2(s2);
    printInfo3(s3);

    // // typedef keyword
    // coe student1;
    // student1.roll = 1664;
    // student1.cgpa = 6.7;
    // strcpy(student1.name, "XYZ");

    return 0;
}

void printInfo1(struct student s1)
{
    printf("Student info : \n");
    printf("Name = %s\n", s1.name);
}

void printInfo2(struct student s2)
{
    printf("Student info : \n");
    printf("Name = %s\n", s2.name);
}

void printInfo3(struct student s3)
{
    printf("Student info : \n");
    printf("Name = %s\n", s3.name);
}
