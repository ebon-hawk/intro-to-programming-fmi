#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Using `1ULL << k` is an efficient, bitwise alternative to `pow(2, k)`
// for calculating powers of two, as each LSHIFT is equivalent
// to multiplication by two
int main() {
    unsigned int k;

    printf("Enter k (0..63): ");
    scanf("%u", &k);

    unsigned long long result = 1ULL << k;

    printf("2^%u = %llu\n", k, result);

    return 0;
}