#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// To clear (set to 0) the bit at position `k`, you create a mask
// with 1 at `k` using `1ULL << k`, invert it with `~` to get 0 at `k`
// and 1 elsewhere, and then apply a bitwise AND operation
int main() {
    unsigned int N, k;

    printf("Enter N and k: ");
    scanf("%u %u", &N, &k);

    unsigned int result = N & ~(1ULL << k);

    printf("After clearing bit %u: %u (0x%X)\n", k, result, result);

    return 0;
}