#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    // Display students with CGPA >= 8.0
    printf("\nStudents having CGPA >= 8.0\n");
    printf("----------------------------\n");

    for(i = 0; i < 5; i++) {
        if(s[i].cgpa >= 8.0) {
            printf("Roll Number : %d\n", s[i].rollno);
            printf("Name        : %s\n", s[i].name);
            printf("CGPA        : %.2f\n\n", s[i].cgpa);
        }
    }

    return 0;
}