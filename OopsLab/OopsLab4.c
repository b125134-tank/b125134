#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;
    float area, perimeter;

    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter breadth: ");
    scanf("%f", &r.breadth);

    // Calculate area and perimeter
    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    printf("\nRectangle Details\n");
    printf("Length    : %.2f\n", r.length);
    printf("Breadth   : %.2f\n", r.breadth);
    printf("Area      : %.2f\n", area);
    printf("Perimeter : %.2f\n", perimeter);

    return 0;
}