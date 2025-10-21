#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int exists = (a + b > c) && (b + c > a) && (a + c > b);

    // Compute the semiperimeter of the triangle
    double s = (a + b + c) / 2.0;

    // Calculate the area using Heron's formula if valid, otherwise return -1
    double area = sqrt(s * (s - a) * (s - b) * (s - c)) * exists + (-1) * (!exists);
    printf("%.3lf\n", area);
    return 0;
}