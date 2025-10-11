#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient (real): %.2f\n", (float)a / b);
    printf("Sum: %d\n", a + b);

    return 0;
}