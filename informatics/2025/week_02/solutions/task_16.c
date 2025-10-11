#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

#include <stdio.h>

int main() {
    double r;

    scanf("%lf", &r);

    double circumference = 2 * PI * r;
    double diameter = 2 * r;
    double volume = (4.0 / 3.0) * PI * r * r * r;

    printf("Circumference: %.2lf\n", circumference);
    printf("Diameter: %.2lf\n", diameter);
    printf("Volume: %.2lf\n", volume);

    return 0;
}