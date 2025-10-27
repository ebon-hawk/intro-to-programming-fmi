#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
 * Create a mask with 1 at position `k`: `1ULL << k`.
 * Invert the mask with `~` so that all bits are 1 except `k`.
 * Apply bitwise AND to zero that bit.
 */
int main() {
    unsigned int N, k;

    printf("Enter N and k: ");
    scanf("%u %u", &N, &k);

    unsigned int result = N & ~(1ULL << k);

    printf("After clearing bit %u: %u (0x%X)\n", k, result, result);

    return 0;
}