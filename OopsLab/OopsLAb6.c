#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, total;

    // Input first distance
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    // Input second distance
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    // Calculate total distance
    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    // Display result
    printf("\nTotal Distance = %d feet %d inches\n", total.feet, total.inches);

    return 0;
}