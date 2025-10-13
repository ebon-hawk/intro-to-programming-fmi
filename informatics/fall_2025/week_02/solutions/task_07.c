#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

#include <stdio.h>

int main() {
    double r;

    printf("Enter radius: ");
    scanf("%lf", &r);

    double area = PI * r * r;
    double circumference = 2 * PI * r;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}