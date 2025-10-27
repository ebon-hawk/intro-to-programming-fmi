#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Shift `N` right by `k` positions, then mask the lowest bit using `& 1`
int main() {
    unsigned int N, k;

    printf("Enter N and k: ");
    scanf("%u %u", &N, &k);

    // Isolate the `k`-th bit
    unsigned int bit = (N >> k) & 1U;

    printf("The %u-th bit of %u is: %u\n", k, N, bit);

    return 0;
}