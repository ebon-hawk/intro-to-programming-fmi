#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Integer division: %d\n", a / b);
    printf("Real division: %.2f\n", (float)a / b);

    return 0;
}