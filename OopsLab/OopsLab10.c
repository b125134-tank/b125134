#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollno;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    // Display student details
    printf("\n----- Student Details -----\n");
    printf("Roll Number   : %d\n", s.rollno);
    printf("Name          : %s\n", s.name);
    printf("Date of Birth : %02d/%02d/%04d\n",
           s.dob.day, s.dob.month, s.dob.year);

    return 0;
}