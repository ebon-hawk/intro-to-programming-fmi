#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// To set (force to 1) the bit at position `k`,
// you create a mask with 1 at `k` using `1ULL << k`
// and apply a bitwise OR operation
int main() {
    unsigned int N, k;

    printf("Enter N and k: ");
    scanf("%u %u", &N, &k);

    unsigned int result = N | (1U << k);

    printf("After setting bit %u: %u (0x%X)\n", k, result, result);

    return 0;
}