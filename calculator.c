#include <stdio.h>

int main() {
    int choice;
    double a, b, result;

    printf("=== Simple Calculator ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choose operation (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (choice) {
        case 1:
            result = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
            } else {
                printf("Error: Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}