#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("1 / n = %d\n", 1 / n); // Integer division
    printf("1.0 / n = %f\n", 1.0 / n); // Real division

    return 0;
}