#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int negative = (a < 0) + (b < 0) + (c < 0);
    int positive = (a > 0) + (b > 0) + (c > 0);

    printf("Negative: %d\n", negative);
    printf("Positive: %d\n", positive);

    return 0;
}