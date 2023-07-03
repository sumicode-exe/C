#include <stdio.h>
#include <math.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa; 
};

typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

void printInfor(struct student s1);

