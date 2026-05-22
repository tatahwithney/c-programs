#include <stdio.h>

int main() {
    double r, area;
    printf("Enter radius: ");
    scanf("%lf", &r);

    area = 3.14159 * r * r;
    printf("Area of circle with radius %.2lf is %.2lf\n", r, area);

    return 0;
}