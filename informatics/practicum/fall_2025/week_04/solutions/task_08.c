#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // XOR swap algorithm
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}