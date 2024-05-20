#include <stdio.h>

struct Student {
    int regNo;
    char name[50];
    int age;
};

int main() {
    struct Student students[5]; // Assuming there are 5 students in the class

    // Input student records
    for (int i = 0; i < 5; i++) {
        printf("Enter registration number for student %d: ", i + 1);
        scanf("%d", &students[i].regNo);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

    // Display student records
    printf("\nStudent Records:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Registration Number: %d\n", students[i].regNo);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n\n", students[i].age);
    }

    return 0;
}