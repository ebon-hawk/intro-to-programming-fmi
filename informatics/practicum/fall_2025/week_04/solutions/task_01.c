#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
 * Instead of using the math function `pow(2, k)`,
 * we can use the LSHIFT operator: `1ULL << k`.
 * Every left shift multiplies the number by two.
 */
int main() {
    unsigned int k;

    printf("Enter k (0..63): ");
    scanf("%u", &k);

    unsigned long long result = 1ULL << k;

    printf("2^%u = %llu\n", k, result);

    return 0;
}