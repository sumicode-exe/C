#include <stdio.h>

struct Student {
    int regNo;
    char name[50];
    int age;
    int marksMaths;
    int marksScience;
    int marksEnglish;
    char grade;
};

void calculateGrade(struct Student *student) {
    float average = (student->marksMaths + student->marksScience + student->marksEnglish) / 3.0;

    if (average >= 90) {
        student->grade = 'A';
    } else if (average >= 80) {
        student->grade = 'B';
    } else if (average >= 70) {
        student->grade = 'C';
    } else if (average >= 60) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

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
        printf("Enter marks in Maths for student %d: ", i + 1);
        scanf("%d", &students[i].marksMaths);
        printf("Enter marks in Science for student %d: ", i + 1);
        scanf("%d", &students[i].marksScience);
        printf("Enter marks in English for student %d: ", i + 1);
        scanf("%d", &students[i].marksEnglish);
        
        calculateGrade(&students[i]);
    }

    // Display student records with grades
    printf("\nStudent Records with Grades:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Registration Number: %d\n", students[i].regNo);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Maths Marks: %d\n", students[i].marksMaths);
        printf("Science Marks: %d\n", students[i].marksScience);
        printf("English Marks: %d\n", students[i].marksEnglish);
        printf("Grade: %c\n\n", students[i].grade);
    }

    return 0;
}