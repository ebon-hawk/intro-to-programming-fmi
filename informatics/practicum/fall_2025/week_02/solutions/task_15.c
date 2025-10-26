#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double D = b * b - 4 * a * c;
    double sqrtD = sqrt(D);
    double x1 = (-b + sqrtD) / (2 * a);
    double x2 = (-b - sqrtD) / (2 * a);

    printf("x1 = %.2lf\n", x1);
    printf("x2 = %.2lf\n", x2);

    return 0;
}