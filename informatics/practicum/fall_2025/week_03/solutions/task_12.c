#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int first = a + (a % 2 != 0);
    int last = b - (b % 2 != 0);

    // This works because even numbers with step 2 form an arithmetic progression
    double avg = (first + last) / 2.0;

    // Use the average only if a valid sequence exists; otherwise, the result is 0
    double result = (first <= last) * avg;

    printf("%.3f\n", result);

    return 0;
}