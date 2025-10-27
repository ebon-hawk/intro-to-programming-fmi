#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Combine the unique bits of `a` and `b`
    a = a ^ b;

    // Isolate and recover the original value of `a` and store it in `b`
    b = a ^ b;

    // Isolate and recover the original value of `b` and store it in `a`
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}