#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // Arithmetic progression
    long long totalDistance = (long long)n * (3 * n + 1);

    printf("Total distance: %lld\n", totalDistance);

    return 0;
}