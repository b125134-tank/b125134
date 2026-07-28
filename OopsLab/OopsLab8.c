#include <stdio.h>

struct Employee {
    int empid;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i, maxIndex = 0;

    // Input employee details
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empid);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with highest salary
    for(i = 1; i < 5; i++) {
        if(emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Display employee with highest salary
    printf("\nEmployee with Highest Salary\n");
    printf("----------------------------\n");
    printf("Employee ID   : %d\n", emp[maxIndex].empid);
    printf("Employee Name : %s\n", emp[maxIndex].name);
    printf("Salary        : %.2f\n", emp[maxIndex].salary);

    return 0;
}