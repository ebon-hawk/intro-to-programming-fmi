#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// To toggle the state of the lowest 5 bits (positions 0 through 4),
// create a mask where those 5 bits are 1 using `(1 << 5) - 1`,
// and then apply a bitwise XOR operation with that mask
int main() {
    unsigned int N;

    printf("Enter a non-negative integer N: ");
    scanf("%u", &N);

    unsigned int result = N ^ ((1U << 5) - 1);

    printf("Original number: %u (0x%X)\n", N, N);

    printf("After flipping lowest 5 bits: %u (0x%X)\n", result, result);

    return 0;
}