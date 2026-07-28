#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;

    // Accept details of 3 employees
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Employee Name: ");
        scanf(" %s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n----- Employee Details -----\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", emp[i].empId);
        printf("Employee Name : %s\n", emp[i].name);
        printf("Salary        : %.2f\n", emp[i].salary);
    }

    return 0;
}