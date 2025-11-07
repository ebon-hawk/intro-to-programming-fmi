#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle\n");

        return 1;
    }

    if (a == b && b == c) {
        printf("Equilateral\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}