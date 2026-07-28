#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float c_marks;
    float maths_marks;
    float physics_marks;
    float total;
    float average;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in C: ");
    scanf("%f", &s.c_marks);

    printf("Enter Marks in Mathematics: ");
    scanf("%f", &s.maths_marks);

    printf("Enter Marks in Physics: ");
    scanf("%f", &s.physics_marks);

    // Calculate total and average
    s.total = s.c_marks + s.maths_marks + s.physics_marks;
    s.average = s.total / 3;

    // Display student details
    printf("\n----- Student Details -----\n");
    printf("Roll Number   : %d\n", s.rollno);
    printf("Name          : %s\n", s.name);
    printf("C Marks       : %.2f\n", s.c_marks);
    printf("Maths Marks   : %.2f\n", s.maths_marks);
    printf("Physics Marks : %.2f\n", s.physics_marks);
    printf("Total Marks   : %.2f\n", s.total);
    printf("Average Marks : %.2f\n", s.average);

    return 0;
}