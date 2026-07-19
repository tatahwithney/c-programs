#include <stdio.h>

int main() {
    int base, exp, i;
    unsigned long long result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (i = 0; i < exp; i++)
        result *= base;

    printf("%d^%d = %llu\n", base, exp, result);
    return 0;
}