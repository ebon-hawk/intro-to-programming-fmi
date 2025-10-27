#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
 * The lowest 5 bits correspond to bit positions 0..4.
 * We need a mask where the lowest 5 bits are 1: `(1 << 5) - 1`.
 * Then we XOR the number with this mask to flip only those bits.
 */
int main() {
    unsigned int N;

    printf("Enter a non-negative integer N: ");
    scanf("%u", &N);

    // 0b00011111 = 31
    unsigned int mask = (1U << 5) - 1;

    // Flip the lowest 5 bits
    unsigned int result = N ^ mask;

    printf("Original number: %u (0x%X)\n", N, N);

    printf("After flipping lowest 5 bits: %u (0x%X)\n", result, result);

    return 0;
}