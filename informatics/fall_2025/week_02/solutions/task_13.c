#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    int product = d1 * d2 * d3 * d4;
    int sum = d1 + d2 + d3 + d4;

    printf("Product: %d\n", product);
    printf("Sum: %d\n", sum);

    return 0;
}